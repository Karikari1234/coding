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
        ll arr[n];
        map<ll, ll> mp;
        map<ll, ll>::iterator it;
        set<ll> s;
        REP(i, 0, n)
        {
            cin >> arr[i];
            mp[arr[i]]++;
            s.insert(arr[i]);
        }
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            it = mp.begin();
            ll maxima = INT_MIN;
            for (it; it != mp.end(); it++)
            {
                maxima = max(maxima, it->second);
            }
            if (maxima > n / 2)
            {
                cout << max(min(maxima - 1, (ll)s.size()), min(maxima, (ll)s.size() - 1)) << endl;
            }
            else
            {
                cout << max(min(maxima - 1, (ll)s.size()), min(maxima, (ll)s.size() - 1)) << endl;
            }
        }
    }
}