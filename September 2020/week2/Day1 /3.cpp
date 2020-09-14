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
        ll n, x, y;
        cin >> n >> x >> y;
        ll diff = y - x;
        ll cnt = n - 1;
        ll max_end = INT_MAX;
        ll beg = 1, inc;
        for (int i = cnt; i >= 1; i--)
        {
            if (diff % i == 0)
            {
                ll divs = i - 1;
                if ((n - (divs + 2)) > 0)
                {
                    ll total;
                    if (x % (diff / i) == 0)
                    {
                        total = (divs + 2) + (x / (diff / i)) - 1;
                        beg = (x - ((diff / i) * ((x / (diff / i)) - 1)));
                    }
                    else
                    {
                        total = (divs + 2) + (x / (diff / i));
                        beg = (x - ((diff / i) * ((x / (diff / i)))));
                    }

                    if (n - total > 0)
                    {

                        if (max_end > y + (n - total) * (diff / i))
                        {
                            inc = diff / i;
                            max_end = min(max_end, y + (n - total) * (diff / i));
                        }
                    }
                    else
                    {
                        max_end = y;
                        inc = diff / i;
                    }
                }
                else
                {
                    beg = x;
                    max_end = y;
                    inc = diff / i;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout << max_end << " ";
            max_end-=inc;
        }
        cout << endl;
    }
}