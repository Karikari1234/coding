#include<bits/stdc++.h>

using namespace std;

int ans[100][100];


int knapsack(int totalWeight,int weights[],int val[],int itemSize){
    int ans[itemSize+1][totalWeight+1];

    for(int i=0;i<=itemSize;i++){
        for(int j=0;j<=totalWeight;j++){
            if(i==0||j==0)
                ans[i][j] = 0;
            else if(weights[i]<=j){
                ans[i][j] = max(ans[i-1][j],val[i] + ans[i-1][j-weights[i]]);
                //cout << "sodo " << ans[i][j] << endl;
            }
            else
            {
                ans[i][j] = ans[i-1][j];
            }
            cout << ans[i][j] << " " ;
        }
        cout << endl;
    }
    return ans[itemSize][totalWeight];
}

int main()
{
    int totalWeight;
    cin >> totalWeight;
    int weights[] = {1,3,4,5};
    int size = sizeof(weights)/sizeof(weights[0]);
    int val[] = {1,4,5,7};
    int x = knapsack(totalWeight,weights,val,size);
    cout << x << endl;
}