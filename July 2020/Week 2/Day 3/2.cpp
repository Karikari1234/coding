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
        ll n, k1, k2;
        cin >> n >> k1 >> k2;
        string s;
        cin >> s;
        ll one_count = 0, ans = 0;
        REP(i, 0, s.size())
        {
            if (s[i] == '0')
            {
                if (one_count == 1)
                {
                    ans += k1;
                }
                else if (one_count > 1)
                {
                    ll x = (one_count / 2) * min(k1, k2 - k1) + (one_count - (one_count / 2)) * max(k1, k2 - k1);
                    ans += x;
                }
                one_count = 0;
            }
            else
            {
                one_count++;
                if (i == n - 1)
                {
                    if (one_count == 1)
                    {
                        ans += k1;
                    }
                    else if (one_count > 1)
                    {
                        ll x = (one_count / 2) * min(k1, k2 - k1) + (one_count - (one_count / 2)) * max(k1, k2 - k1);
                        ans += x;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}