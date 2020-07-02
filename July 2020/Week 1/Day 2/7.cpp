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
        // cout << " n ta meye ";
        vector<pair<ll, ll> > g(n), b(n);
        REP(i, 0, n)
        {
            pair<ll, ll> p = make_pair(i + 1, 0);
            g[i] = p;
            b[i] = p;
        }
        //cout << "SHOB Pair SHESH\n";
        REP(i, 0, n)
        {
            ll k;
            cin >> k;
            REP(j, 0, k)
            {
                ll x;
                cin >> x;
                if (b[x - 1].second == 0 && g[i].second == 0)
                {
                    b[x - 1].second = 1;
                    g[i].second = 1;
                }
            }
        }
        //cout << "SHOB INPUT NISI SHESH\n";
        ll x, y, flag = 0;
        REP(i, 0, n)
        {
            if (g[i].second == 0)
            {
                flag = 1;
                x = i + 1;
            }
            if (b[i].second == 0)
            {
                flag = 1;
                y = i + 1;
            }
        }
        //cout << "SHOB KAAJ SHESH\n";
        if (!flag)
        {
            cout << "OPTIMAL\n";
        }
        else
        {
            cout << "IMPROVE\n";
            cout << x << " " << y << endl;
        }
    }
}