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
    ll x, i, sum = 0, mini = 0;
    cin >> x;
    vector<ll> q(x - 1), p(x);
    vector<ll>::iterator it;
    REP(i, 0, x - 1)
    {
        cin >> q[i];
        sum += q[i];
        mini = min(sum, mini);
    }
    //ll mini = *min_element(q.begin(), q.end());
    //cout << mini << endl;
    p[0] = 1 - mini;
    //cout << p[0] << endl;
    REP(i, 0, x - 1)
    {
        p[i + 1] = p[i] + q[i];
        //cout << p[i + 1] << endl;
    }
    bool ok = true;
    REP(i, 0, x)
    {
        if (p[i] < 0 || p[i] > x)
        {
            ok = false;
        }
    }
    if (ok)
    {
        ok = set<ll>(p.begin(), p.end()).size() == x;
    }
    if (ok)
    {
        REP(i, 0, x)
        cout << p[i] << " ";
    }
    else
    {
        cout << -1 << endl;
    }
}