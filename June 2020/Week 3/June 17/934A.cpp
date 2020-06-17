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
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    int i, j, k;
    REP(i, 0, n)
    {
        cin >> a[i];
    }
    REP(i, 0, m)
    {
        cin >> b[i];
    }
    ll res = 1e18;
    REP(i, 0, n)
    {
        ll now = -1e18;
        REP(j, 0, n)
        {
            if (j != i)
            {
                REP(k, 0, m)
                {
                    now = max(now, a[j] * b[k]);
                }
            }
        }
        res = min(now, res);
    }
    cout << res << endl;
}