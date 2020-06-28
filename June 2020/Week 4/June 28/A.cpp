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
        ll n, odd = 0;
        string s;
        cin >> n;
        cin >> s;
        vector<int> o;
        REP(i, 0, n)
        {
            if (((s[i] - '0') % 2) == 1 && odd < 2)
            {
                odd++, o.push_back(i);
            }
        }
        if (odd == 2)
        {
            cout << s[o[0]] << s[o[1]];
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}