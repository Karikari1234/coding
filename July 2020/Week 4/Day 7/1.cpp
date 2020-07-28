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
        ll n;
        cin >> n;
        ll arr[n];
        // cout << ans[1];
        ll ans[2000];
        REP(i, 0, 2000)
        {
            ans[i] = INT_MAX;
        }
        map<ll, vector<ll>> mp;
        map<ll, vector<ll>>::iterator it;
        REP(i, 0, n)
        {
            cin >> arr[i];
            for (j = 2; j * j <= arr[i]; j++)
            {
                if (arr[i] % j == 0)
                {
                    mp[j].push_back(i);
                }
            }
        }
        ll m = 1;
        for (it = mp.begin(); it != mp.end(); it++)
        {
            auto it2 = it->second.begin();
            ll ch = 0;
            for (it2; it2 != it->second.end(); it2++)
            {
                if (ans[*it2] == INT_MAX)
                {
                    ans[*it2] = m, ch = 1;
                }
                //cout << arr[*it2] << " ";
            }
            //cout << endl;
            if (ch)
                m++;
        }
        cout << m - 1 << endl;
        REP(i, 0, n)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}