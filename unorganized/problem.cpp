#include <bits/stdc++.h>

using namespace std;


int main(){
    int hh,mm;
    int t;
    cin >> t;
    while(t--){
        cin >> hh >> mm;
        int ans =0;
        ans +=((24-hh)*60);
        ans-=mm;
        cout << ans << endl;
    }
}