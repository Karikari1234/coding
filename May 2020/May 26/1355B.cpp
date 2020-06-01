#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int ans = 0, curr = 0;
        for (int i = 0; i < n; i++)
        {
            curr++;
            if (curr == arr[i])
            {
                ans++;
                curr = 0;
            }
        }
        cout << ans << endl;
    }
}