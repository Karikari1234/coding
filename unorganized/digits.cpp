#include<bits/stdc++.h>

using namespace std;


int main(){
    while(1){
    int a,b;
    cin >> a >> b;
    if(a==b){
        cout << a*10 << " " << b*10 +1 << endl;
        return 0;
    }
    if(b-a==1)
    {
        cout << a << " " << b << endl;
        return 0;
    }
    if(a==9&&b==1){
        cout << a*10+9 << " " << b*100 << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
    }
}