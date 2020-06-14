#include<bits/stdc++.h>

using namespace std;

void fact(int n){
    int arr[n+1];
    arr[0]=1;
    arr[1]=1;
    cout << "(" << 0 << ")! = " << arr[0] << endl;
    for(int i=2;i<=n;i++){
        arr[i] = i*arr[i-1];
        cout << "(" << i << ")! = " << arr[i] << endl;
    }
}

int fact2(int n){
    int arr[n+1];
    arr[0]=1;
    arr[1]=1;
    if(n==0){
        return arr[0];
    }
    else if(n==1){
        return arr[1];
    }
    else{
        arr[n] = n*fact2(n-1);
    }
    return arr[n];
}

int fact3(int n){
    if(n==0)
        return 1;
    else if(n==1)
        return 1;
    else 
        return n*fact3(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << fact3(n)<< endl;
}