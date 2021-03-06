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
        ll n, k;
        cin >> n >> k;
        ll arr[n], p[n + 1];
        p[0] = 0;
        REP(i, 0, n)
        {
            cin >> arr[i];
        }
        ll peak = 0;
        REP(i, 0, n)
        {
            if (i != 0 && i != n - 1 && arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                peak++;
                p[i + 1] = peak;
            }
            p[i + 1] = peak;
        }
        ll ans = -1, index = -1;
        REP(i, 0, n - 1)
        {
            if (i + k - 1 < n && p[i + k - 1] - p[i + 1] > ans)
            {
                ans = p[i + k - 1] - p[i + 1];
                index = i;
            }
        }
        cout << ans + 1 << " " << index + 1 << endl;
    }
}