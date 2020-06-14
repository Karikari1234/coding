#include<bits/stdc++.h>

using namespace std;

int r[100];

int cutRod(int* p,int n){
    int q;
    if(r[n-1]>=0){
        return r[n-1];
    }
    if(n<=0){
        q=0;
    }
    else
    {
        q=INT_MIN;
    }   
    for(int i=0;i<n;i++){
        q = max(q,p[i]+cutRod(p,n-i-1));
    }
    r[n-1]=q;
    return q;
}

int main(){
    int p[]={1,5,8,9,10,17,17,20,24,30};
    int n;
    cin >> n;
    for(int i=0;i<=n;i++){
        r[i]=INT_MIN;
    }
    int res = cutRod(p,n);
    cout << res << endl;
}