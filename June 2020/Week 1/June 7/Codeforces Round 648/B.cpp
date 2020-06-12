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

bool comp(pair<ll, ll> p1, pair<ll, ll> p2)
{
    if ((p1.first < p2.first) && (p1.second != p2.second))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    FASTIO;
    TEST(test)
    {
        ll n, x = 0, y = 0;
        cin >> n;
        ll a[n], b[n];
        vector<pair<ll, ll>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            v.push_back(make_pair(a[i], b[i]));
            y += b[i];
        }
        int i;
        REP(i, 1, n)
        {
            if (a[i] < a[i - 1])
            {
                x++;
            }
        }
        if (x == 0 || (y != 0 && y != n))
        {
            YES;
            //cout << x << y << endl;
        }
        else
            NO;
    }
}