#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--)
    {
        int n, m;
        cin >> n >> m;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        else if (n == 2)
        {
            cout << m << endl;
            continue;
        }
        else
        {
            cout << 2 * m << endl;
            continue;
        }
    }
}