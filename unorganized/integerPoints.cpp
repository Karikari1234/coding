#include<bits/stdc++.h>

using namespace std;

int oddeven(int a){
    if(a%2)
        return 1;
    else 
        return 0;
}

int main(){
    int test;
    cin >> test;
    for(int i=0;i<test;i++){
        long long int x,even1=0,even2=0,odd1=0,odd2=0;
        cin >> x;
        //vector<long long int> v[2];
        for(int j=0;j<x;j++){
            int a;
            cin >> a;
            //v[0].push_back(a);
            if(oddeven(a))
                even1++;
            else
            {
                odd1++;
            }
        }
        int y;
        cin >> y;
        for(int j=0;j<y;j++){
            int a;
            cin >> a;
            //v[1].push_back(a);
            if(oddeven(a))
                even2++;
            else
            {
                odd2++;
            }
            
        }
        //cout << "ODDS " << odd1<< " "  << odd2 << endl;
        //cout << "EVENS " << even1 << " " <<even2 << endl;
        cout << even1*even2 + odd2*odd1 << endl;
    }
}