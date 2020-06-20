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
    ll k, prod = 1;
    cin >> k;
    string s = "codeforces";
    ll val[11];
    REP(i, 0, 11)
    {
        val[i] = 1;
    }
    while (prod < k)
    {
        REP(i, 0, 10)
        {
            val[i]++;
            prod /= (val[i] - 1);
            prod *= val[i];

            if (prod >= k)
            {
                break;
            }
        }
    }

    REP(i, 0, 10)
    {
        while (val[i] > 0)
        {
            cout << s[i];
            val[i]--;
        }
    }
    cout << endl;
}