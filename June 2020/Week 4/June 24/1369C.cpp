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
        ll n, k, sum = 0;
        cin >> n >> k;
        ll arr[n], w[k];
        map<ll, vector<ll>> mp;
        map<ll, vector<ll>>::iterator it;
        REP(i, 0, n)
        {
            cin >> arr[i];
        }
        ll c_one = 0;
        REP(i, 0, k)
        {
            cin >> w[i];
            sum += w[i];
            if (w[i] == 1)
                c_one++;
        }
        sort(arr, arr + n, greater<int>());
        sort(w, w + k);
        ll x = 0;
        ll ans = 0;
        ll a = 0;
        i = 0;
        ll g_b = 0;
        REP(i, 0, c_one)
        {
            
            ans += arr[g_b] * 2;
            sum--;
            w[i] = 0;
            g_b++;
        }
        ll nex = c_one;
        REP(i, nex, k)
        {
            
            ans += arr[g_b];
            sum--;
            w[i]--;
            g_b++;
        }
        i = c_one;
        while (sum)
        {
            if (w[i % k] == 1)
            {

                mp[i % k].push_back(arr[g_b]);
                g_b = (g_b + 1) % n;
                sum--;
                w[i % k]--;
                i++;
            }
            else
            {
                g_b = (g_b + 1) % n;
                w[i % k]--;
                sum--;
            }
        }
        for (it = mp.begin(); it != mp.end(); it++)
        {
            ans += (*max_element(it->second.begin(), it->second.end()));
        }

        cout << ans << endl;
    }
}