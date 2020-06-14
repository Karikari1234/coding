#include<bits/stdc++.h>

using namespace std;

int r[1000];

int cutrod(int* p,int n){ 
    r[0]=0;
    for(int i=0;i<=n;i++){
        int q = INT_MIN;
        for(int j=0;j<i;j++){
            q = max(q,p[j]+r[i-j]);
        }
        r[i]=q;
    }
    return r[n];
}

int main()
{
    int n;
    cin >>  n;
    int p[]={1,5,8,9};
    int res = cutrod(p,n);
    cout << res << endl;
}