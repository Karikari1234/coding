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
        ll n, k, srpls = 0, ans = 0;
        cin >> n >> k;
        ll arr[n + 5];
        vector<ll> gorib;
        vector<ll>::iterator it;
        REP(i, 0, n)
        {
            cin >> arr[i];
            if (arr[i] >= k)
            {
                srpls += (arr[i] - k);
                ans++;
            }
            else
            {
                gorib.push_back(arr[i]);
            }
        }
        sort(gorib.begin(), gorib.end(), greater<int>());
        for (it = gorib.begin(); it != gorib.end(); it++)
        {
            if (k - *it <= srpls)
            {
                ans++;
                srpls -= (k - *it);
            }
        }
        cout << ans << endl;
    }
}