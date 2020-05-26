#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {

        int n, k;
        cin >> n >> k;
        int ans = n;
        for (int i = 1; i * i <= n; i++)
        {
            /* code */
            if (n % i == 0)
            {
                if (i <= k)
                {
                    ans = min(ans, n / i);
                }
                if (n / i <= k)
                {
                    ans = min(ans, i);
                }
            }
        }
        cout << ans << endl;
    }
}