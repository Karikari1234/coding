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
        ll a, b, c;
        cin >> a >> b >> c;
        if (a == b && a>=c)
        {
            YES;
            cout << a << " " << c<< " " << c << endl;
        }
        else if (b == c&& b>=a)
        {
            YES;
            cout << b << " " << a << " " << a << endl;
        }
        else if (a == c&&a>=b)
        {
            YES;
            cout << a << " " << b << " " << b << endl;
        }
        else
        {
            NO;
        }
    }
}