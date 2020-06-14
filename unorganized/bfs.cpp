#include<bits/stdc++.h>

using namespace std;

int main(){
    double a,b,c,d,k,ans;
    int test;
    cin >> test ;
    for(int i=0;i<test;i++){
        cin >> a >> b >> c >> d >> k;
        if(ceil(a/c)+ceil(b/d)>k){
            cout << -1 << endl;
        }
        else{
            cout << ceil(a/c) <<" "<< ceil(b/d) << endl;
        }
    }
}