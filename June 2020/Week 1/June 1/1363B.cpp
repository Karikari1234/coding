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
        string s;
        cin >> s;
        int s0 = 0, s1 = 0, p1 = 0, p0 = 0;
        int i;
        REP(i, 0, s.size())
        {
            if (s[i] == '0')
                s0++;
            else
                s1++;
        }
        int ans = min(s0, s1);
        REP(i, 0, s.size())
        {
            if (s[i] == '0')
                p0++, s0--;
            else
                p1++, s1--;
            ans = min(ans, p1 + s0);
            ans = min(ans, s1 + p0);
        }
        cout << ans << endl;
    }
}