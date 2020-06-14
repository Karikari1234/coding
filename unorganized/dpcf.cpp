#include<bits/stdc++.h>

using namespace std;

int fun(string s,int size){
    int cnt = 0;
    for(int i=0;i<size-2;i++){
        if(s[i]=='Q')
        {
            for(int j=i+1;j<size-1;j+=2){
                if(s[j]=='A'&&s[j+1]=='Q'){
                    cnt++;
                    cout << j << endl;
                }
            }
        }
    }
    for(int i=0;i<size-3;i++){
        if(s[i]=='Q'&&s[i+1]=='A'){
            for(int j=i+3;j<size-1;j++){
                if(s[j]='Q'){
                cnt++;
                //cout << j << endl;
                }
            }
        }
    }
    //cout << "Done" << endl;
    return cnt;
}

int main(){
    string s;
    cin >> s;
    int x=s.size();
    int cnt = fun(s,x);
    cout << cnt;
}