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
        ll n, k, cnt = 0, cnt2 = 0, z = 0, prev = 0;
        cin >> n >> k;
        int i;
        string s;
        cin >> s;
        int i, d, ans = 0;
        REP(i, 0, s.size())
        {
            if (s[i] == '1')
            {
                if (d < k)
                    ans--;
                d = 0;
            }
            else
            {
                d++;
                if (d == k + 1)
                {
                    ans++;
                    d = 0;
                }
            }
        }
        cout << ans << endl;
    }
}