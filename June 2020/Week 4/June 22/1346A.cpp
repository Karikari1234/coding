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
        unsigned long long int n, k, div;
        cin >> n >> k;
        if (k != 1)
            div = (1 - pow(k, 4)) / (1 - k);
        else
            div = n;
        ll n1 = n / div;
        cout << n1 << " ";
        REP(i, 0, 3)
        {
            n1 *= k;
            cout << n1 << " ";
        }
        cout << "\n";
    }
}