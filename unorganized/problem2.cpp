#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int candles,kids;
        cin >> candles >> kids;
        int minimas = kids/2;
        int maximus = minimas;
        minimas = kids - minimas;
        int low_candles = candles/kids;
       // cout << low_candles << endl;
        if(!low_candles)low_candles++;
        //cout << low_candles << endl;
        int total_candles = minimas * low_candles;
       // cout << total_candles << endl;
        int high_candles = low_candles+1;
      //  cout << "high candles " << high_candles << endl;
        if(high_candles*maximus+total_candles<=candles)total_candles +=(high_candles*maximus);//cout << total_candles << endl;
        else if(high_candles*maximus+total_candles>candles&&low_candles*maximus+total_candles<=candles)total_candles+=(low_candles*maximus);//cout << total_candles << endl;
        else {
            //cout << candles << endl;
        }
        if(total_candles<=candles)cout << total_candles << endl;
        else cout << candles << endl; 
    }
}