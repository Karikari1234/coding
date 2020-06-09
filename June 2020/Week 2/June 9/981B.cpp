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
    ll n;
    cin >> n;
    int i;
    si s;
    map<ll, ll> mp;
    map<ll, ll>::iterator it;
    ll sum = 0;
    REP(i, 0, n)
    {
        ll a, b;
        cin >> a >> b;
        s.insert(a);
        mp[a] = b;
    }
    ll m;
    cin >> m;
    REP(i, 0, m)
    {
        ll a, b;
        cin >> a >> b;
        s.insert(a);
        it = mp.find(a);
        if (it != mp.end())
        {
            if (it->second < b)
            {
                it->second = b;
            }
        }
        else
        {
            mp[a] = b;
        }
    }
    REP_ITER(it, mp)
    {
        sum += it->second;
    }
    cout << sum << endl;
}