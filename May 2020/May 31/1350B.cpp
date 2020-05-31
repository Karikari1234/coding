#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define REP(i, a, b) for (i = a; i < b; i++)
#define REP_ITER(it, v) for (it = v.begin(); it != v.end(); it++)

#define FASTIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(0)

#define TEST(test) \
    cin >> test;   \
    while (test--)

#define cll(a, b) cin >> a >> b
#define YES cout << "YES\n"
#define NO cout << "NO\n"

#define vi vector<int>
#define vi_iterator vector<int>::iterator

#define si set<int>
#define si_iterator set<int>::iterator

int main()
{
    FASTIO;
    ll test;
    TEST(test)
    {
        ll n;
        cin >> n;
        ll arr[n + 1], i;
        ll dp[n + 1];
        REP(i, 1, n + 1)
        {
            cin >> arr[i];
            dp[i] = 1;
        }
        ll j, k;
        REP(j, 1, n + 1)
        {
            for (int k = j * 2; k < n + 1; k += j)

            {
                if (arr[j] < arr[k])
                {
                    dp[k] = max(dp[j] + 1, dp[k]);
                }
            }
        }
        ll ans = 0;
        REP(i, 1, n + 1)
        {
            ans = max(ans, dp[i]);
        }
        cout << ans << endl;
    }
}