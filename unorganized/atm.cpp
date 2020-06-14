#include<bits/stdc++.h>

using namespace std;

int main(){
    int x;
    map<int,int> mp;
    map<int, int>::iterator it;
    //random_r();
    for(int i=0;i<100000000;i++){
        x = rand()%6;
        mp[x]++;
    }
    for(it=mp.begin();it!=mp.end();it++){
        cout << (it->first)+1<< ": " << (double)(it->second)/100000000 << endl;
    }
}