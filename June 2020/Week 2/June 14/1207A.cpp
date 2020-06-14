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
        ll bun, beef, chicken, x, y;
        cin >> bun >> beef >> chicken >> x >> y;
        ll ans = 0;
        if (x > y)
        {
            while (beef >= 1 && bun >= 2)
            {
                ans += x;
                beef--;
                bun -= 2;
            }
            if (bun >= 2)
            {
                while (chicken >= 1 && bun >= 2)
                {
                    ans += y;
                    chicken--;
                    bun -= 2;
                }
            }
        }
        else if (x < y)
        {
            while (chicken >= 1 && bun >= 2)
            {
                ans += y;
                chicken--;
                bun -= 2;
            }
            if (bun >= 2)
            {
                while (beef >= 1 && bun >= 2)
                {
                    ans += x;
                    beef--;
                    bun -= 2;
                }
            }
        }
        else
        {
            if (beef > chicken)
            {
                while (beef >= 1 && bun >= 2)
                {
                    ans += x;
                    beef--;
                    bun -= 2;
                }
                if (bun >= 2)
                {
                    while (chicken >= 1 && bun >= 2)
                    {
                        ans += y;
                        chicken--;
                        bun -= 2;
                    }
                }
            }
            else
            {
                while (chicken >= 1 && bun >= 2)
                {
                    ans += y;
                    chicken--;
                    bun -= 2;
                }
                if (bun >= 2)
                {
                    while (beef >= 1 && bun >= 2)
                    {
                        ans += x;
                        beef--;
                        bun -= 2;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}