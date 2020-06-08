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
    ll n, m, k;
    cin >> n >> m >> k;
    int i, arr[m + 1];
    REP(i, 0, m + 1)
    {
        cin >> arr[i];
    }
    ll s = 0;
    REP(i, 0, m)
    {
        if (__builtin_popcount(arr[i] ^ arr[m]) <= k)
            s++;
    }
    cout << s << endl;
}