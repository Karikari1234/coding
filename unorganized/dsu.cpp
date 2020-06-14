#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    cin >> test;
    while(test){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int ans[n];
        for(int i=0;i<n;i++){
            int cnt=1;
            int answer = arr[i];
            while(answer!=i+1){
                answer = arr[answer-1];
                cnt++;
            }
            ans[i] = cnt;
        }

        cout << endl;
        test--;
    }
}