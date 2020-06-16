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
        ll n, x, a, b;
        cin >> n >> x >> a >> b;
        ll left = min(a, b);
        ll right = max(a, b);
        if (left - x < 1)
        {
            x -= abs(left - 1);
            left = 1;
            //cout << "IN\n";
        }
        else
        {
            left -= x;
            x = 0;
        }
        //cout << "FIrst x = " << x << endl;
        if (right + x > n)
        {
            x -= abs(right - n);
            right = n;
        }
        else
        {
            right += x;
            x = 0;
        }
        // << "First right= " << right << endl;
        if (left - x < 1)
        {
            x -= abs(left - 1);
            left = 1;
        }
        else
        {
            left -= x;
            x = 0;
        }
        if (right + x > n)
        {
            x -= abs(right - n);
            right = n;
        }
        else
        {
            right += x;
            x = 0;
        }
        cout << abs(left - right) << endl;
    }
}