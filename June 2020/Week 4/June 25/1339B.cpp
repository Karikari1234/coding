#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define REP(i, a, b) for (i = a; i < b; i++)
#define REP_ITER(it, v) for (it = v.begin(); it != v.end(); it++)

#define FASTIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(0)

#define TEST(test) \
    int test;      \
    cin >> test;   \
    while (test--)

#define cll(a, b) cin >> a >> b
#define YES cout << "YES\n"
#define NO cout << "NO\n"

#define vi vector<int>
#define vi_iterator vector<int>::iterator

#define si set<int>
#define si_iterator set<int>::iterator

double pi = 2 * acos(0.0);
int i, j;
int main()
{
    FASTIO;
    TEST(test)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll ans[n];
        REP(i, 0, n)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        if (n % 2 == 0)
        {
            ll k = n - 1;
            REP(i, 0, n / 2)
            {
                ans[k--] = arr[n - i - 1];
                ans[k--] = arr[i];
            }
        }
        else
        {
            ll k = n - 1;
            ans[0] = arr[n / 2];
            REP(i, 0, n / 2)
            {
                ans[k--] = arr[n - i - 1];
                ans[k--] = arr[i];
            }
        }
        REP(i, 0, n)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}