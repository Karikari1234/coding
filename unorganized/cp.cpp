#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a ,b ;
    cin >> n >> a >> b;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int costin[]={a,b};
    int cost=0;
    for(int i=0;i<n/2;i++){
        if((arr[i]==2&&arr[n-i-1]!=2)){
            cost+=costin[arr[n-i-1]];
        }
        else if(arr[i]!=2&&arr[n-i-1]==2){
            cost+=costin[arr[i]];
        }
        else if(arr[i]==2&&arr[n-i-1]==2){
            cost+=(2*min(a,b));
        }
        else if(arr[i]==arr[n-i-1]){
           // cout << "DONEkeyu" << endl;
        }
        else{
            cout << -1 << endl;
            return 0;
        }
        
    }
    if(n%2!=0){
        if(arr[n/2]==2){
            cost+=min(a,b);
        }
    }
    cout << cost << endl;
}