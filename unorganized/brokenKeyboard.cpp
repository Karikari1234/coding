#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        string s;
        set<char> str;
        cin >> s;
        if(s.size()==1){
            cout << s << endl;
            continue;
        }
        for(int j=0;j<s.size()-1;j++){
            if(s[j]!=s[j+1]){
                str.insert(s[j]);
            }
            else{
                j++;
            }
        }
        if(s[s.size()-1]!=s[s.size()-2]&&s.size()>=2){
            str.insert(s[s.size()-1]);
        }
        set<char>::iterator it=str.begin();
        for(it;it!=str.end();it++){
            cout << *it;
        }
        cout << endl;
    }
}