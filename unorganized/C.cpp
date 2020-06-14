#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int n,m;
    cin >> n >> m;
    unordered_map<long long int,long long int>map;
    long long int sum=0;
    long long int arr[n+1];
    long long int barr[n+1];
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr,arr+n);
    int day =1;
    int index=0,in=0;
    for(int i=0;i<n;i++)
	{
		map[i%m]+=a[i];
		sum+=map[i%m];
		cout<<sum<<" ";
	}
}