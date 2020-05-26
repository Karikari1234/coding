#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr[13];
    for (int i = 0; i < 12; i++)
    {
        /* code */
        cin >> arr[i];
    }
    sort(arr, arr + 12, greater<int>());
    int sum = 0;
    int ans;
    if (a == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < 12; i++)
    {
        /* code */
        sum += arr[i];
        if (sum >= a)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}