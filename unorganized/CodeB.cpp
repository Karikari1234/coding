#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    string str;
    cin >> str;
    if(k==0)
    {
        cout << str;
        return 0;
    }
    if(str.size() == 1&& k!=0){
        cout << 0 << endl;
        return 0;
    }
    else if(str[0]!='1'&& k!=0){
        str[0] = '1';
        k--;
    }
    int count = 1;
    while(k>0&&count!=str.size()){
        if(str[count]!='0'){
            k--;
            str[count] = '0';
        }
        count++;
    }
    cout << str << endl;
}