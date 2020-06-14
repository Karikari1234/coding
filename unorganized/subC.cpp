#include<bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
    string str;
    cin >> str;
    bool ans[26] = {} ;
    char anschar[26] ;
    for(int i=0;i<26;i++){
        anschar[i]  = 'a'+i;
    }
    for(int i=0;i<str.size();i++){
        int j=i;
        int cnt = 0;
        while(j+1<str.size()&&str[j]==str[j+1])
                j++;
            if((j-i)%2==0)
                ans[str[j]-'a'] = true;
        i = j;
    }
    for(int i=0;i<26;i++)
    {
        if(ans[i])
            cout << anschar[i];
    }
    cout << endl;
    }
}
