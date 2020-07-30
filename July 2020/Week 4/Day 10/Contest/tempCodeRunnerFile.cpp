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
        ll n;
        cin >> n;
        ll eight = 0, nine = 0;
        if (n % 4 == 0)
        {
            eight = n / 4;
            nine = n - (n / 4);
        }
        else
        {
            eight = (n / 4) + 1;
            nine = n - eight;
        }
        REP(i, 0, nine)
        {
            cout << 9;
        }
        REP(i, 0, eight)
        {
            cout << 8;
        }
        cout << endl;
    }
}