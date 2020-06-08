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
    ll a[n], b[n];
    int i;
    vector<pair<ll, ll>> v1, v2;
    vi v3;
    REP(i, 0, n)
        cin >> a[i];
    REP(i, 0, n)
        cin >> b[i];
    REP(i, 0, n)
    {
        v1.push_back(make_pair(a[i], i));
        v2.push_back(make_pair(b[i], i));
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    REP(i, 0, n)
    {
        v3.push_back((v1[i].second - v2[i].second + n) % n);
    }
    int f[n + 1] = {0};
    REP(i, 0, v3.size())
    {
        f[v3[i]]++;
    }
    sort(f, f + n + 1);
    cout << f[n] << endl;
}