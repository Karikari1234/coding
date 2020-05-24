#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[n];
        int maxim = -10000;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> arr[i];
            maxim = max(maxim, arr[i]);
        }
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            if ((maxim - arr[i]) % 2 != 0)
            {
                flag = 1;
            }
        }
        if (!flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
}