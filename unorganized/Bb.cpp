#include<bits/stdc++.h>

using namespace std;

int arr[1000000],barr2[1000000],arrdays[1000000];
int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n,days=1;
    cin >> n;
    int barra[n];
    int s = INT_MIN;
    for(int i=0;i<n;i++){
        cin >> barra[i] ;
        s = max(s,barra[i]);
        if(barra[i]>0&&arr[barra[i]]>=1){
            arr[barra[i]]++;
            if(arr[barra[i]]>1){
                days++;
                arrdays[days]++;
                for(int i=0;i<=s;i++){
                    if(arr[i]!=0){
                        cout << "vasue of day not zero\n";
                        cout << -1 << endl;
                        return 0;
                    }

                }
            }
        }
        if(barra[i]>0&&arr[barra[i]]==0){
            arr[barra[i]]++;
            cout << barra[i] << " " << arr[barra[i]] << endl;
            arrdays[days]++;
        }
        if(barra[i]<0&&arr[-barra[i]]==0){
            cout << barra[i] << endl;
            cout << "vasue of exir befor entry\n";
            cout << -1 << endl;
            return 0;
        }
        if(barra[i] < 0 &&arr[-barra[i]]>0){
            arr[-barra[i]]--;
            arrdays[days]++;
        }
    }
 cout << days << endl;
 for(int i=1;i<=days;i++){
     cout << arrdays[i] << " ";
 }
}