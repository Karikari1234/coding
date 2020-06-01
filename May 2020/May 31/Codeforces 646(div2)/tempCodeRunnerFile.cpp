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
    TEST(test)
    {
        int o = 0, z = 0, ans = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] - '0')
                o++;
            else
                z++;
        }
        if (s.size() < 3)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            int n = s.size();
            if (s[0] == '0' && s[n - 1] == '0')
            {
                ans = o;
            }
            else if (s[0] == '1' && s[n - 1] == '0')
            {
                ans = o - 1;
            }
            else if (s[0] == '0' && s[n - 1] == '1')
            {
                ans = o - 1;
            }
            else
            {
                ans = o - 1;
            }
            if (o == s.size())
            {
                cout << 0 << endl;
                continue;
            }
            if (z == s.size())
            {
                cout << 0 << endl;
                continue;
            }
            if (s[0] == '1' && s[n - 1] == '0' && o - 1 == s.size() - 2)
            {
                cout << 0 << endl;
                continue;
            }
            cout << ans << endl;
        }
    }
}