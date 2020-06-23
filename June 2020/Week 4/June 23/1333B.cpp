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
        ll a[n], b[n];
        REP(i, 0, n)
        {
            cin >> a[i];
        }
        REP(i, 0, n)
        {
            cin >> b[i];
        }
        if (a[0] != b[0])
        {
            NO;
        }
        else
        {
            ll f = 0, pos = 0, neg = 0;
            REP(i, 1, n)
            {
                if (a[i - 1] == 1)
                    pos = 1;
                if (a[i - 1] == -1)
                    neg = 1;
                if ((b[i] != a[i] && !pos && !neg) || (b[i] > a[i] & !pos) || (b[i] < a[i] && !neg))
                {
                    f = 1;
                }
            }
            if (f)
                NO;
            else
                YES;
        }
    }
}