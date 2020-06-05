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

ll func_rec(ll n)
{
    if (n == 1)
        return 1;
    return n + func_rec(n / 2);
}

int main()
{
    FASTIO;
    TEST(test)
    {
        ll n;
        cin >> n;
        ll ans = func_rec(n);
        cout << ans << endl;
    }
}