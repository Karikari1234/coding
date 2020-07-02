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
        ll n, one_has = 0;
        cin >> n;
        string s;
        cin >> s;
        char a[n], b[n];
        REP(i, 0, s.size())
        {
            if (!one_has && s[i] == '2')
            {
                a[i] = '1';
                b[i] = '1';
            }
            else if (one_has && s[i] == '2')
            {
                a[i] = '2';
                b[i] = '0';
            }
            else if (!one_has && s[i] == '1')
            {
                a[i] = '0';
                b[i] = '1';
                one_has = 1;
            }
            else if (one_has && s[i] == '1')
            {
                a[i] = '1';
                b[i] = '0';
            }
            else
            {
                a[i] = '0';
                b[i] = '0';
            }
        }
        REP(i, 0, n)
        {
            cout << a[i];
        }
        cout << endl;
        REP(i, 0, n)
        {
            cout << b[i];
        }
        cout << endl;
    }
}