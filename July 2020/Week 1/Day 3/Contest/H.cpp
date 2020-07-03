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
    ll n, ans = 0;
    cin >> n;
    ll x[n], y[n];
    map<ll, ll> mp1, mp2;
    map<ll, ll>::iterator it1, it2;
    REP(i, 0, n)
    {
        cin >> x[i] >> y[i];
        mp1[x[i]]++;
        mp2[y[i]]++;
    }
    REP(i, 0, n)
    {
        it1 = mp1.find(x[i]);
        it2 = mp2.find(y[i]);
        if (it1->second != 1 || it2->second != 1)
            ans += ((it1->second - 1) * (it2->second - 1));
    }
    cout << ans << endl;
}