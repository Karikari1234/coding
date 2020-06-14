#include<bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    while(q){
        int n;
        cin >> n;
        set<int> peep;
        set<int>::iterator it;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            peep.insert(x);
        }
        int team =1;
        it=peep.begin();
        int m=*it;
        it++;
        for(;it!=peep.end();it++){
            if(*it-m==1){
                team = 2;
            }
            m=*it;
        }
        cout << team << endl;
        
        q--; 
    }
}