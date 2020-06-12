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

int main()
{
    FASTIO;
    TEST(test)
    {
        ll n, m, s, k, l, e;
        cin >> n >> m;
        ll i, j, arr[n + 1][m + 1];
        REP(i, 1, n + 1)
        {
            REP(j, 1, m + 1)
            {
                cin >> arr[i][j];
            }
        }
        ll ans = 0;
        for (s = 2, e = n + m; s < e; s++, e--)
        {
            ll o = 0, z = 0;
            REP(i, 1, n + 1)
            {
                REP(j, 1, m + 1)
                {
                    if (i + j == s || i + j == e)
                    {
                        if (arr[i][j] == 1)
                            o++;
                        else
                            z++;
                    }
                }
            }
            ans += min(o, z);
        }
        cout << ans << "\n";
    }
}