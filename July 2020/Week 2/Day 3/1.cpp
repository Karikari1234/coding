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
        //cout << "Case : " << test << endl;
        //cout << endl;
        ll n, ans = 0;
        cin >> n;
        ll arr[n], prefix[n + 1] = {0};
        //unordered_set<ll> s;
        map<ll, ll> mp;
        prefix[0] = 0;
        REP(i, 0, n)
        {
            cin >> arr[i];
            prefix[i + 1] += prefix[i] + arr[i];
            //cout << " prefix sum upto " << i + 1 << " is " << prefix[i + 1] << endl;
            //s.insert(arr[i]);
            mp[arr[i]]++;
        }
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 2; i < n + 1; i++)
            {
                //cout << " length = " << i << endl;
                for (int j = i; j < n + 1; j++)
                {
                    if (j - i >= 0)
                    {
                        //cout << " the sum in range of " << j - i + 1 << " to " << j << " is " << prefix[j] - prefix[j - i] << endl;
                        auto it = mp.find(prefix[j] - prefix[j - i]);
                        if (it != mp.end())
                        {
                            ans += it->second;
                            mp.erase(it->first);
                        }
                    }
                }
            }
            cout << ans << endl;
        }
    }
}