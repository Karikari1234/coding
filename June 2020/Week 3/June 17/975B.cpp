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
    int i, j;
    ll arr[14], temp[14], var, res = 0;
    REP(i, 0, 14)
    {
        cin >> arr[i];
    }
    REP(i, 0, 14)
    {
        REP(j, 0, 14)
        {
            temp[j] = arr[j];
        }
        var = arr[i];
        temp[i] = 0;
        REP(j, 0, 14)
        {
            temp[j] += var / 14;
        }
        var %= 14;
        int k = i + 1;
        while (var--)
        {
            if (k == 14)
            {
                k = 0;
            }
            temp[k++]++;
        }
        ll ans = 0;
        REP(j, 0, 14)
        {
            if (temp[j] & 1)
                continue;
            ans += temp[j];
        }
        res = max(ans, res);
    }
    cout << res << endl;
}