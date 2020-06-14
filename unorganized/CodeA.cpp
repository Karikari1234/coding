#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int flag =0;
    if(a+b == c+d)
        flag = 1;
    else if(a+c == b+d)
        flag =1 ;
    else if(a+d == b+c)
        flag =1;
    else if(a+b+c == d)
        flag =1;
    else if(b+c+d == a)
        flag =1;
    else if(c+d+a == b)
        flag =1;
    else if(a+b+d == c)
        flag = 1;
    if(flag)
        cout << "YES";
    else
    {
        cout << "NO";
    }
     
}
