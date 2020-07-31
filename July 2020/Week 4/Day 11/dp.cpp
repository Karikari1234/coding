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
    ll n;
    cin >> n;
    ll arr[n][3];
    REP(i, 0, n)
    {
        REP(j, 0, 3)
        {
            cin >> arr[i][j];
        }
    }
    ll dp[n][3];
    REP(i, 0, 3)
    {
        dp[0][i] = arr[0][i];
        //cout << dp[0][i] << " upore ";
    }
    //cout << endl;
    REP(i, 1, n)
    {
        REP(j, 0, 3)
        {
            dp[i][j] = arr[i][j] + max(dp[i - 1][(j + 1) % 3], dp[i - 1][(3 + (j - 1)) % 3]);
            //cout << " FOr  i and j = " << i << " " << j << endl;
            //cout << i - 1 << " " << (j + 1) % 3 << " ";
            //cout << i - 1 << " " << (j - 1) % 3 << " ";
        }
        //cout << endl;
    }
    ll ans = INT_MIN;
    REP(i, 0, 3)
    {
        ans = max(ans, dp[n - 1][i]);
    }
    cout << ans << endl;
}