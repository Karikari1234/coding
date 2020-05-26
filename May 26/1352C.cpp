#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--)
    {
        long long int n, ans;
        cin >> n;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        n = n / 2;
        ans = n * (n + 1) * ((2 * n) + 1);
        ans /= 6;
        ans *= 8;
        cout << ans << endl;
    }
}