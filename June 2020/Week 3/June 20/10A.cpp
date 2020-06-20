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
    ll n, p1, p2, p3, t1, t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    ll l = 0, r = 0, idle = 0, dur = 0;
    ll ans = 0;
    REP(i, 0, n)
    {
        ll prev = r;
        cin >> l >> r;
        if (i != 0)
        {
            idle = (l - prev);
            if (idle >= t1 + t2)
            {
                ll q = idle - (t1 + t2);
                ans += q * p3;
                ans += t2 * p2;
                ans += t1 * p1;
            }
            if (idle >= t1)
            {
                ll q = idle - t1;
                ans += q * p2;
                ans += t1 * p1;
            }
            if (idle >= t2)
            {
            }
        }
        dur += (r - l);
    }

    // if (idle >= t1 + t2)
    // {
    //     ll q = idle - (t1 + t2);
    //     ans += q * p3;
    //     ans += t2 * p2;
    //     ans += t1 * p1;
    // }
    // else if (idle >= t1)
    // {
    //     ll q = idle - t1;
    //     ans += q * p2;
    //     ans += t1 * p1;
    // }
    ans += (dur * p1);
    cout << ans << endl;
}