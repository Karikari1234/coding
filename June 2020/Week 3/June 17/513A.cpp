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
    ll n1, n2, k1, k2;
    cin >> n1 >> n2 >> k1 >> k2;
    int i;
    REP(i, 0, 100000)
    {
        if (i % 2 == 0)
        {
            if (n1 - 1 >= 0)
                n1--;
            else
            {
                cout << "Second\n";
                return 0;
            }
        }
        else
        {
            if (n2 - 1 >= 0)
                n2--;
            else
            {
                cout << "First\n";
                return 0;
            }
        }
    }
}