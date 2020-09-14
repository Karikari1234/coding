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
#define YES cout << "Yes\n"
#define NO cout << "No\n"

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
        ll r, g, b, w;
        cin >> r >> g >> b >> w;
        if ((r + g + b + w) % 2 == 0)
        {
            if (r % 2 == 0 && g % 2 == 0 && b % 2 == 0 && w % 2 == 0)
            {
                YES;
            }
            else
            {
                if (r != 0 && g != 0 && b != 0)
                {
                    r--;
                    g--;
                    b--;
                    w += 3;
                    if (r % 2 == 0 && g % 2 == 0 && b % 2 == 0 && w % 2 == 0)
                    {
                        YES;
                    }
                    else
                    {
                        NO;
                    }
                }
                else
                {
                    NO;
                }
            }
        }
        else
        {
            if (r % 2 != 0 && g % 2 == 0 && b % 2 == 0 && w % 2 == 0)
            {
                YES;
            }
            else if (r % 2 == 0 && g % 2 != 0 && b % 2 == 0 && w % 2 == 0)
            {
                YES;
            }
            else if (r % 2 == 0 && g % 2 == 0 && b % 2 != 0 && w % 2 == 0)
            {
                YES;
            }
            else if (r % 2 == 0 && g % 2 == 0 && b % 2 == 0 && w % 2 != 0)
            {
                YES;
            }
            else
            {
                if (r != 0 && g != 0 && b != 0)
                {
                    r--;
                    g--;
                    b--;
                    w += 3;
                    if (r % 2 != 0 && g % 2 == 0 && b % 2 == 0 && w % 2 == 0)
                    {
                        YES;
                    }
                    else if (r % 2 == 0 && g % 2 != 0 && b % 2 == 0 && w % 2 == 0)
                    {
                        YES;
                    }
                    else if (r % 2 == 0 && g % 2 == 0 && b % 2 != 0 && w % 2 == 0)
                    {
                        YES;
                    }
                    else if (r % 2 == 0 && g % 2 == 0 && b % 2 == 0 && w % 2 != 0)
                    {
                        YES;
                    }
                    else
                    {
                        NO;
                    }
                }
                else
                {
                    NO;
                }
            }
        }
    }
}