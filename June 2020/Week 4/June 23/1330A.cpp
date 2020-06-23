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
        ll n, x, prev = 0, req, ans = 0;
        cin >> n >> x;
        ll arr[n], truth[201];
        set<ll> s;
        set<ll>::iterator it;
        REP(i, 1, n + x + 1)
        {
            truth[i] = 0;
        }
        REP(i, 0, n)
        {
            cin >> arr[i];
            truth[arr[i]] = 1;
        }
        for (i = n + x; i > 0; i--)
        {
            int v = 0;
            for (j = 1; j <= i; j++)
            {
                if (!truth[j])
                    v++;
            }
            if (v <= x)
            {
                cout << i << endl;
                break;
            }
        }
    }
}