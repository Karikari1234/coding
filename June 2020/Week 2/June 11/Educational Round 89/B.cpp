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
        ll n, x, m;
        cin >> n >> x >> m;
        ll i, ans = 1, l = -1, r = n + 1, m1 = x, m2 = x;
        REP(i, 0, m)
        {
            cin >> l >> r;
            //cout << m1 << " " << m2 << endl;
            //cout << "Compare " << l << " " << r << endl;
            if (m1 >= l && m2 <= r)
            {
                ans += (abs(r - m2) + abs(l - m1));
                m1 = l;
                m2 = r;
            }
            else if (m1 <= r && m2 >= r && m1 >= l)
            {
                ans += abs(m1 - l);
                m1 = l;
            }
            else if (m1 <= l && m2 >= l && m2 <= r)
            {
                ans += abs(m2 - r);
                m2 = r;
            }
        }
        cout << ans << endl;
    }
}