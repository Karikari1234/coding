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

int main()
{
    FASTIO;
    ll n;
    cin >> n;
    int i, j;
    if (n <= 2)
    {
        cout << "No\n";
    }
    else
    {
        ll k;
        if (n % 2 == 0)
        {
            k = n / 2;
        }
        else
        {
            k = (n + 1) / 2;
        }
        cout << "Yes\n";
        cout << 1 << " " << k;
        cout << endl;
        cout << n - 1 << " ";
        int x;
        REP(x, 1, n + 1)
        {
            if (x != k)
                cout << x << " ";
        }
        cout << endl;
    }
}