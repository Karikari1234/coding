#include<bits/stdc++.h>

using namespace std;

int barr[100][100];

int fun(int arr[],int profit[],int n,int k){
    //int barr[k+1][n+1];
    for(int i=0;i<=k;i++){
        for(int j=0;j<=n;j++){
            if(i==0||j==0)
                barr[i][j] = 0;
            else if(arr[i]>j)
                barr[i][j] = barr[i-1][j];
            else
            {
                barr[i][j] =  max(barr[i-1][j],profit[i]+barr[i-1][j-arr[i]]);
            }
            cout << barr[i][j] << endl;
        }
        cout << endl;
    }
    return barr[k][n];
}

int main(){
    int arr[] = {1,2,3,4};
    int profit[] = {2,5,7,8};
    int n =  5;
    int ans  = fun(arr,profit,n,4);
    cout << ans << endl;
}