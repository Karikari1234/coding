#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        int n1 = n - k + 1;
        int n2 = n - 2 * (k - 1);
        if (n1 > 0 && n1 % 2 == 1)
        {
            cout << "YES\n";
            for (int i = 0; i < k - 1; i++)
            {
                cout << 1 << " ";
            }
            cout << n1 << endl;
        }
        else if (n2 > 0 && n2 % 2 == 0)
        {
            cout << "YES\n";
            for (int i = 0; i < k - 1; i++)
            {
                cout << 2 << " ";
            }
            cout << n2 << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
}