/* we have to determine if x is square of a number or not*/
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
    ll x;
    cin >> x;
    ll L = 0, R = x / 2;
    while (L <= R)
    {

        ll mid = L + (R - L) / 2;
        if (mid * mid == x)
        {
            cout << mid << endl;
            return mid;
        }
        if (mid * mid < x)
        {
            L = mid + 1;
        }
        else
        {
            R = mid - 1;
        }
    }
    cout << "No" << endl;
}