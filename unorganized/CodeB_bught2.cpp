#include<bits/stdc++.h>

using namespace std;


int main(){
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        int n, r;
        int cnt = 1;
        cin >> n >> r;
        int arr[n];
        set<int> st;
        set<int>::iterator it;
        for(int j=0;j<n;j++){
            cin >> arr[j];
            st.insert(arr[j]);
        }
        int sze = st.size();
        int arr2[sze];
        int x=0;
        for(it=st.begin();it!=st.end();it++){
            arr2[x]=*it;
            x++;
        }
        if(sze == 1){
            cout << 1 << endl;
            continue;
        }
        else{
            int cnt2=0;
            for(int j=sze-1;j>=1;j--){
                cnt2++;
                //cout << "BOMB NUMBER = " << cnt2 << endl;
                //cout << "BEFORE BOMB BLAST POSITION =" << arr2[j-1] << endl;
                arr2[j-1]-=(cnt2*r);
                //cout << "ARRAY BOMB -- : "<< arr2[j-1] << endl;
                if(arr2[j-1]<=0){
                    cout << cnt2 << endl;
                    break;
                }
                else{
                    if(j-1 == 0 && arr2[j-1]>0){
                        cnt2++;
                        cout << cnt2 << endl;
                        break;
                    }
                }
            }
        }
    }
}