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
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        ll tempa = a;
        ll tempb = b;
        ll tempx = x;
        ll tempy = y;
        ll tempn = n;

        ll temp = a;
        a -= min(n, abs(a - x));
        n -= min(n, abs(temp - x));
        b -= min(n, abs(b - y));
        ll ans1 = a * b;

        ll temp2 = tempb;
        tempb -= min(tempn, abs(tempb - tempy));
        tempn -= min(tempn, abs(temp2 - tempy));
        tempa -= min(tempn, abs(tempa - tempx));
        ll ans2 = tempa * tempb;

        cout << min(ans1, ans2) << endl;
        if (a < b)
        {
            ll temp = a;
            a -= min(n, abs(a - x));
            n -= min(n, abs(temp - x));
            b -= min(n, abs(b - y));
        }
        else if (b < a)
        {
            ll temp = b;
            b -= min(n, abs(b - y));
            n -= min(n, abs(temp - y));
            a -= min(n, abs(a - x));
        }
        else
        {
            if (x < y)
            {
                ll temp = a;
                a -= min(n, abs(a - x));
                n -= min(n, abs(temp - x));
                b -= min(n, abs(b - y));
            }
            else if (y < x)
            {
                ll temp = b;
                b -= min(n, abs(b - y));
                n -= min(n, abs(temp - y));
                a -= min(n, abs(a - x));
            }
            else
            {
                ll temp = a;
                a -= min(n, abs(a - x));
                n -= min(n, abs(temp - x));
                b -= min(n, abs(b - y));
            }
        }
        //cout << a * b << endl;
    }
}