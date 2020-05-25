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
        string sss[n];
        for (int i = 0; i < n; i++)
        {
            cin >> sss[i];
        }

        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = sss[i][j] - '0';
            }
        }
        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (arr[i][j] == 1)
                {
                    if (arr[i][j + 1] != 1 && arr[i + 1][j] != 1)
                    {
                        flag = 1;
                    }
                }
            }
        }
        if (!flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}