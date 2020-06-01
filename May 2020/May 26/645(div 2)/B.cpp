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
        int arr[n + 1];
        arr[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            /* code */
            cin >> arr[i];
        }
        sort(arr, arr + n + 1);
        int ini = n;
        for (int i = n; i >= 0; i--)
        {
            if (arr[i] > ini)
            {
                ini--;
            }
        }
        cout << ini + 1 << endl;
    }
}