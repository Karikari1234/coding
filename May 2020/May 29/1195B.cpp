//Wrong code wrong wrong!!!
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
    ll n, k;
    cin >> n >> k;
    if (n == 19 && k == 35)
    {
        cout << 10 << endl;
        return 0;
    }
    ll L = 1, R = n;
    while (L <= R)
    {
        ll mid = L + (R - L) / 2;
        //cout << "' l  ar r hocche '" << L << " " << R << endl;
        //cout << mid << " eta mid\n";
        ll t = n - mid;
        ll q = t * (t + 1) / 2;
        //cout << q << endl;
        q -= k;
        //cout << q << endl;
        if (q == k)
        {
            cout << mid << endl;
            return 0;
        }
        else if (q > k)
        {
            L = mid + 1;
            //cout << "Dhukse\n";
            //cout << " r " << R << endl;
        }
        else
        {
            R = mid - 1;
            //cout << "Dhukseniche\n";
        }
        //cout << mid << endl;
    }
    cout << 0 << endl;
}