#include<bits/stdc++.h>

using namespace std;

int main(){
    int test,n;
    string s;
    cin >> test;
    //cout << test << endl;
    for(int i=0;i<test;i++){
        cin >> n >> s;
        int corr=0;
        if(s[0]=='1'||s[n-1]=='1'){
            corr = 2*n;
            //return 0;
        }
        int cntLeftToright=0;
        int stairs=0;
        //int stairup=0;
        for(int j=0;j<n;j++){
            if(s[j]=='1'){
                stairs = 1;
                cntLeftToright = j;           
        }
        }
        int solleft = (cntLeftToright+1)*2;
        //cout << "LEFT TO RIGHT SOLN = "  << solleft << endl;
        int cntRightToLEft=0;
        for(int j=n-1;j>=0;j--){
            if(s[j]=='1'){
            stairs=1;
            cntRightToLEft=n-j-1;
            //cout << j << endl;
            }
        }
        int solRight=(cntRightToLEft+1)*2;
        //cout << "RIGHT TO LEFT SOLN = " << solRight << endl;
        int ans=max(solleft,solRight);
        if(!stairs)
            cout << n << endl;
        else if(corr){
            cout << corr << endl;
        } 
        else
        {
            cout << ans << endl;
        }
        //cout << i << endl;
    }
}