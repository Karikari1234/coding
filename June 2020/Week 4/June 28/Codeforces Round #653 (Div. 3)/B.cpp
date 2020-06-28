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
        ll n, three = 0, two = 0;
        cin >> n;
        ll a = n;
        while (n % 3 == 0)
        {
            n /= 3;
            three++;
        }
        while (n % 2 == 0)
        {
            n /= 2;
            two++;
        }
        if (two == three && n == 1)
        {
            ll cnt = 0;
            while (a != 1)
            {
                a /= 6;
                cnt++;
            }
            cout << cnt << endl;
        }
        else if (two < three && n == 1)
        {
            ll mult = pow(2, (three - two));
            ll cnt = three - two;
            a *= mult;
            while (a != 1)
            {
                a /= 6;
                cnt++;
            }
            cout << cnt << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}