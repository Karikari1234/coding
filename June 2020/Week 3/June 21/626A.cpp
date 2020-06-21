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
int i, j, k;
int main()
{
    FASTIO;
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll x, y, len, ans = 0;
    for (i = 2; i <= n; i++)
    {
        for (j = 0; j <= n - i; j++)
        {
            len = j + i - 1;
            x = 0;
            y = 0;
            for (k = j; k <= len; k++)
            {
                if (s[k] == 'U')
                    x++;
                if (s[k] == 'D')
                    x--;
                if (s[k] == 'R')
                    y++;
                if (s[k] == 'L')
                    y--;
            }
            if (x == 0 && y == 0)
            {
                //cout << i << " " << len << endl;
                ans++;
            }
        }
    }
    cout << ans << endl;
}