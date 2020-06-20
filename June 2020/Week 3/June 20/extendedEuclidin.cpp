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

ll extendedGCD(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = (ll)1, y = (ll)0;
        return a;
    }
    ll x1, y1;
    ll d = extendedGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

int main()
{
    FASTIO;
    ll a, b;
    while (cin >> a >> b)
    {
        ll x, y;
        //cin >> a >> b;
        ll ans = extendedGCD(a, b, x, y);
        cout << x << " " << y << " " << ans << endl;
    }
}