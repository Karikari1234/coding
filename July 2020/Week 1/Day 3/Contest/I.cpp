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
string s;

int palindrome_check(int x, int y)
{
    ll a = 0;
    while (x < y)
    {
        if (s[x] != s[y])
        {
            a++;
        }
        x++;
        y--;
    }
    return a;
}
int main()
{
    FASTIO;
    ll ans = LONG_LONG_MAX, mil = 0, fans = 0;
    cin >> s;
    j = s.size() - 1;
    // REP(i, 0, (j + 1) / 2)
    // {
    //     if (s[i] != s[j - i])
    //     {
    //         fans++;
    //         //cout << fans << endl;
    //     }
    // }
    // i = 0;
    // j = s.size() - 1;
    // while (i < j)
    // {
    //     if (mil && s[i] != s[j])
    //     {
    //         ans++;
    //         i++;
    //         j--;
    //     }
    //     else if (s[i] != s[j] && !mil)
    //     {
    //         //cout << i << " " << j << endl;
    //         i++;
    //         ans++;
    //     }
    //     else
    //     {
    //         i++;
    //         j--;
    //         mil = 1;
    //     }
    // }
    REP(i, 0, s.size())
    {
        ans = min((ll)ans, (ll)i + palindrome_check(i, s.size() - 1));
    }
    //cout << ans << endl;
    cout << ans << endl;
}