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
        int s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int flag = 0;
        for (int i = 0; i < n - 2; i++)
        {
            int x = s[i];
            for (int j = i + 2; j < n; j++)
            {
                /* code */
                if (x == s[j])
                {
                    flag = 1;
                }
            }
        }

        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}