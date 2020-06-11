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
    ll i, j, k, l, m, n, o, p, x, y, z, cnt = 0;
    cin >> n;
    ll arr[n];
    map<ll, ll> mp;
    vector<ll> v;
    x = 2;
    while (x <= 2 * (1e9))
    {
        v.push_back(x);
        x *= 2;
    }
    REP(i, 0, n)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    REP(i, 0, n)
    {
        REP(j, 0, v.size())
        {
            z = v[j] - arr[i];
            if (mp[z])
            {
                //cout << "mapppp " << mp[z] << endl;
                if (z == arr[i])
                    cnt += (mp[z] - 1);
                else
                    cnt += mp[z];
            }
        }
    }
    cout << cnt / 2;
}