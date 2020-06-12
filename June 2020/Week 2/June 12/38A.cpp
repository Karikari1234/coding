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

int main()
{
    FASTIO;
    ll n;
    cin >> n;
    int i, j, k, l, m, q, arr[n - 1], a, b;
    REP(i, 0, n - 1)
    cin >> arr[i];
    ll ans = 0;
    cin >> a >> b;
    //cout << a - 1 << " " << b - a << endl;
    REP(i, a - 1,a + b - a  -1)
    {
        ans += arr[i];
    }
    cout << ans << endl;
}