#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define REP(i, a, b) for (i = a; i < b; i++)
#define REP_ITER(it, v) for (it = v.begin(); it != v.end(); it++)

#define FASTIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(0)

#define TEST(test) \
    cin >> test;   \
    while (test--)

#define YES cout << "YES\n"
#define NO cout << "NO\n"

#define vi vector<int>
#define vi_iterator vector<int>::iterator

#define si set<int>
#define si_iterator set<int>::iterator

int main()
{
    FASTIO;
    int test;
    TEST(test)
    {
        ll a, b;
        cin >> a >> b;
        if (a % 2 == 0)
        {
            cout << a + (2 * b) << endl;
            continue;
        }
        else
        {
            ll n = a - 1;
            ll p = a;
            while (n >= 2)
            {
                if (a % n == 0)
                {
                    p = n;
                }
                n--;
            }
            //cout << n << endl;

            cout << a + p + 2 * (b - 1) << endl;
        }
    }
}