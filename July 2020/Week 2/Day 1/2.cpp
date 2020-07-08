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
        ll arr[n];
        ll mx = INT_MIN;
        set<ll> sss;
        set<ll>::iterator it;
        REP(i, 0, n)
        {
            cin >> arr[i];
            sss.insert(arr[i]);
            mx = max(arr[i], mx);
        }
        if (sss.size() > k)
        {
            cout << -1 << endl;
        }
        else
        {
            ll val = mx;
            cout << 100 * k << endl;
            for (int m = 0; m < 50; m++)
            {
                for (it = sss.begin(); it != sss.end(); it++)
                {
                    cout << *it << " ";
                }
                for (int q = 0; q < k - sss.size(); q++)
                {
                    cout << mx << " ";
                }
                for (it = sss.begin(); it != sss.end(); it++)
                {
                    cout << *it << " ";
                }
                for (int q = 0; q < k - sss.size(); q++)
                {
                    cout << mx << " ";
                }
            }
            cout << endl;
        }
    }
}