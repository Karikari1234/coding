#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n * 2);
    //make the array double...IF arr[] = 1,2,3 then this array is arr[] = 1,2,3,1,2,3
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i + n] = arr[i];
    }
    n *= 2;
    vector<int> B = {0}; // B contains sum of the days of i-th month.(check for left,inside,right here)
    vector<int> C = {0}; // C contains sum of the number of all days {n(n+1)/2} of all days before the i-th month.(find answer here)
    for (size_t i = 0; i < n; i++)
    {
        B.push_back(B.back() + arr[i]); //B(1) = B(0) + A(0),B(2) = B(1)+A(1). *this is a prefix sum array.*
    }
    for (size_t i = 0; i < n; i++)
    {
        C.push_back(C.back() + (arr[i] * (arr[i] + 1)) / 2); //C(1) = C(0) + (A(0)*A(0)+1)/2 i.e. sum of 1,2,3,....A(0)  *this is a prefix sum array.*
    }
    int ans = 0;
    for (size_t i = 0; i < n; i++)
    {
        // if number of days before i+1-th month is greater than x
        if (B[i + 1] >= x)
        {
            int z = upper_bound(B.begin(), B.end(), B[i + 1] - x) - B.begin(); //find the index where the value of B(i) is greater than B[i+1]-x
            //cout << "pos =  " << z << endl;
            int cnt = C[i + 1] - C[z];
            //cout << " cnt " << cnt << endl;
            int days = B[i + 1] - B[z];
            int too = x - days;
            cnt += ((arr[z - 1] * (arr[z - 1] + 1)) / 2);
            cnt -= ((((arr[z - 1] - too) * (arr[z - 1] - too + 1))) / 2);
            ans = max(ans, cnt);
        }
    }
    cout << ans << endl;
}