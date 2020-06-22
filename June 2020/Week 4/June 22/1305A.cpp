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
        sort(a, a + n);
        sort(b, b + n);
        REP(i, 0, n)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        REP(i, 0, n)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}