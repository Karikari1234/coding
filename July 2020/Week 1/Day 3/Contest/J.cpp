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
    vector<pair<ll, ll>> v;
    vector<pair<ll, ll>>::iterator it;
    REP(i, 1, n)
    {
        ll l = 0;
        ll r = i - 1;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (2 * n == (r - mid) * (r + mid + 1))
            {
                v.push_back(make_pair(mid, i));
            }
            else if (2 * n > (r - mid) * (r + mid + 1))
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
    }
    REP_ITER(it, v)
    {
        cout << it->first << " " << it->second << endl;
    }
}