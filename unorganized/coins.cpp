#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--){
        int  a,b,n,S;
        cin >> a >> b >> n >> S;
        if(b>=S){
            cout << "YES" << endl;
            
        }
        else if(b>=S%n&&S/n<=a){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

