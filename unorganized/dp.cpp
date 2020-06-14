#include<bits/stdc++.h>

using namespace std;

int CutRod(int* p,int n){
    int r[n+1];
    for(int i=0;i<n;i++){
        r[i]=0;
    }
    for(int i=1;i<=n;i++){
        int q=INT_MIN;
        for(int j=1;j<=i;j++){
            q=max(q,p[j-1]+r[i-j-1]);
        }
        r[i]=q;
    }
    return r[n];
}

int main()
{
    int p[]={1,5,8,9,10,17,17,20,24,30};
    int n;
    cin >> n;
    int res= CutRod(p,n);
    cout << res << endl;
}