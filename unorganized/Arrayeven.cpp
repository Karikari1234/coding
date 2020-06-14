#include<bits/stdc++.h>

using namespace std;

int arr[1000];
int cnn(char s){
    return s-'0';
}
void arrayMe(string ss,int size){
    int s = cnn(ss[size-1])%2;
     //cout << "arr[0] " << ss[0] << endl;
    if(s!=0)
        arr[size-1]=0;
    else
        arr[size-1]=1;
    //cout << "arr[0] " << arr[0] << endl;

    for(int i=size-2;i>=0;i--){
        int s = cnn(ss[i]);
        //cout << s << endl;
        if(s%2!=0){
            arr[i] = 0 + arr[i+1];
            //cout <<"odd " << arr[i] << endl;
        }
        else
        {
            arr[i] = 1 + arr[i+1];
            //cout << "even "<<  arr[i] << endl;
        }
   }
}

int main()
{
    string ss;
    cin >> ss;
    arrayMe(ss,ss.size());
    for(int i=0;i<ss.size();i++){
        cout << arr[i] << endl;
    }
}