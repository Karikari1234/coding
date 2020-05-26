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
        // for (int i = 0; i < n; i++)
        // {
        //     int x = arr[i];
        //     for (int j = 0; j < n; j++)
        //     {

        //     }

        // }
        sort(arr, arr + n);
        int mini = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            mini = min(mini, abs(arr[i] - arr[i + 1]));
        }
        cout << mini << endl;
    }
}