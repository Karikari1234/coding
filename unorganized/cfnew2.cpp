#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> ans;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        //cin >> v[i] ;
        ans.push_back(n+1-x);
        //cout << n+1-x << endl;
    }
    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }
    return 0;
}