#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m ,a ,b,ans;
    cin >> n >> m >> a >>  b;
    if(n%m == 0) ans=0;
    else{
        int rem = (((n/m)+1)*m)-n;
        rem *=a;
        int nam = (n%m)*b;
        ans = min(rem,nam);
    }
    cout << ans << endl;
    return 0;
}