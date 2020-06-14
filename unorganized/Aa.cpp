#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int test;
    cin >> test;
    while(test--){
        int n,flag=0;
        set<int> s;
        set<int>::iterator it = s.begin(); 
       // it = s.begin();
        cin >> n;
        int a[n];
        int b[n];
        int diff[n];
        int zeros[n] = {};
        int ones[n] = {};
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        for(int i=0;i<n;i++){
            diff[i] = b[i] - a[i];
            //cout << diff[i] << endl;
            if(diff[i]<0)
            flag=1;
            s.insert(diff[i]);
          
        }
        if(s.size()>2){
            flag=1;
        }
        else if(s.size()==1 && *it < 0){
            flag=1;
            // cout << "ek " << *it << flag<< endl;
             //cout << diff[0] << endl;
        }
        else if(s.size()==1 && *it >= 0){
           // flag=0;
            //cout << " ek " << *it << endl;
                   //cout << diff[0] << endl;
        }
        else{
            it= s.begin();
            int a = *it;
            it++;
            int b = *it;
            if(a==0&&b>0){
                int cnt =0,cnt2=0,cnt3=0;
            for(int i=0;i<n;i++){
                if(diff[i] ==0)
                    zeros[i] = 1;
                else{
                    ones[i] = 1;
                }
            }
            for(int i=0;i<n;i++){
                if(diff[i]!=0&&!cnt){
                    cnt =1;
                    cnt3++;
                }
                else if(cnt&&diff[i]==0){
                    cnt =0;
                    cnt2++;
                }
            }
            if(cnt2>1||cnt3>1){
                flag =1;
            }
            }
            else{
                flag =1;
            }
        //int cur = diff[0];

        }
        // for(int i=0;i<n;i++){
        //     if(diff[i]<0){
        //         cout << "NO" << endl;
        //         break;
        //     }
        //     else if()
        // }
        // if(s.size()>2){
        //     cout << "NO\n";
        // }
        // else if(s.size()==2){
        //     it= s.begin();
        //     int a = *it;
        //     it++;
        //     int b = *it;
        //     if(a==0&&b>0){
        //         cout << "YES\n";
        //     }
        //     else{
        //         cout << "NO\n";
        //     }
        // }
        // else{
        //     it= s.begin();
        //     int a = *it;
        //     if(a>=0){
        //         cout << "YES\n";
        //     }
        //     else{
        //         cout << "NO\n";
        //     }
        // }
        if(flag)
         cout << "NO\n";
         else
         {
             cout << "YES\n";
         }
         
    }
}