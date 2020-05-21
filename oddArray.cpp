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
        int sum = 0;
        int even = 0;
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (sum % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (even && odd)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}