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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] < b[i]) && (i < k))
            {
                a[i] = b[i];
            }
            sum += a[i];
        }
        cout << sum << endl;
    }
}