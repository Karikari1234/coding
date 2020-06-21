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
    ll n, m;
    cin >> n >> m;
    string s[n];
    ll arr[m];
    map<char, ll> mp;
    REP(i, 0, n)
    {
        cin >> s[i];
    }
    REP(i, 0, m)
    {
        cin >> arr[i];
    }
    ll ans = 0;
    REP(i, 0, m)
    {
        mp['A'] = 0;
        mp['B'] = 0;
        mp['C'] = 0;
        mp['D'] = 0;
        mp['E'] = 0;
        REP(j, 0, n)
        {
            mp[(char)s[j][i]]++;
        }
        ans += arr[i] * max(mp['A'], max(mp['B'], max(mp['C'], max(mp['D'], mp['E']))));
    }
    cout << ans << endl;
}