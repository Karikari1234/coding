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

int prime(int i)
{
    int a = i - 1;
    for (int k = a; k >= 2; k--)
    {
        if (i % k == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    FASTIO;
    ll n, m;
    cin >> n >> m;
    int i, f = 0;
    REP(i, n + 1, m + 1)
    {
        int x = prime(i);
        if (x == 1 && i != m)
            f = 1;
        if (i == m && x == 0)
            f = 1;
    }
    if (!f)
        YES;
    else
        NO;
}