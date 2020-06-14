#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n,days=1;
    cin >> n;
    int arr[1000000]={};
    //int barr2[1000000]={};
    int arrdays[1000000]={};
    int barra[n];
    int s = INT_MIN;
    for(int i=0;i<n;i++){
        cin >> barra[i];
        if(barra[i]>0){
        arr[barra[i]]++;
        if(arr[barra[i]]>1){ 
            arrdays[days] = i ;
            days++;
            arrdays[days] = n-i;
            }
        }
        
    }
    cout << days << endl;
    for(int i=1;i<=days;i++){
       cout <<  arrdays[i] << " ";
    }
    //if(n-arrdays[days])
}