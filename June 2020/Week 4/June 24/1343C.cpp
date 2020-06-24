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
        ll arr[n];
        REP(i, 0, n)
        {
            cin >> arr[i];
        }
        ll p = LLONG_MIN;
        ll neg = LLONG_MIN;
        ll s = 0;
        ll ans = 0;
        REP(i, 0, n)
        {
            if (arr[i] > 0)
            {

                p = max(p, arr[i]);
                if (neg != LLONG_MIN)
                {
                    s = 1;

                    ans += neg;
                    //cout << "neg  " << neg << endl;

                    neg = LLONG_MIN;
                }
                else
                    s = 0;
            }
            else
            {
                neg = max(neg, arr[i]);
                if (p != LLONG_MIN)
                {
                    s = 1;

                    ans += p;
                    // cout << "pos " << p << endl;

                    p = LLONG_MIN;
                }
                else
                    s = 0;
            }
        }
        if (p != LLONG_MIN)
            ans += p;
        else if (neg != LLONG_MIN)
            ans += neg;
        cout
            << ans << endl;
        ///out << endl;
    }
}