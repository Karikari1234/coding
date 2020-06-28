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
        ll n, x;
        cin >> n >> x;
        ll arr[n];
        multiset<ll> ms;
        multiset<ll>::iterator it;
        REP(i, 0, n)
        {
            cin >> arr[i];
            if (arr[i] % x != 0)
                ms.insert(arr[i] % x);
        }
        ll steps = 0;
        ll k = 0;
        // REP_ITER(it, ms)
        // {
        //     cout << *it << endl;
        // }
        // cout << " done\n";
        while (ms.size() != 0)
        {
            it = ms.find(k % x);
            if (it != ms.end())
            {
                ms.erase(ms.lower_bound(*it));

                k++;
                steps++;
                cout << k << " dad " << steps << endl;
                cout << endl;
            }
            else
            {
                k++;
                steps++;
                cout << k << " mom " << steps << endl;
            }
        }
        cout << steps << endl;
    }
}