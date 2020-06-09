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
    ll i, a[2 * n];
    REP(i, 0, n + n)
    {
        cin >> a[i];
        //cout << "done\n";
    }

    sort(a, a + n + n);
    //cout << "done\n";
    if (a[n] == a[n - 1])
        NO;
    else
        YES;
    //cout << "done\n";
}