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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int pos_should_be;
    if (k == 1 || k == n)
    {
        pos_should_be = k;
        if (k == n)
        {
            for (int i = n - 1; i >= 1; i--)
            {
                cout << "PRINT " << s[i] << endl;
                cout << "LEFT\n";
            }
            cout << "PRINT " << s[0];
            return 0;
        }
        else
        {
            int i;
            REP(i, 0, n - 1)
            {
                cout << "PRINT " << s[i] << endl;
                cout << "RIGHT\n";
            }
            cout << "PRINT " << s[n - 1];
            return 0;
        }
    }
    else
    {
        if (abs(k - 1) <= abs(k - n))
        {
            pos_should_be = 1;
            int i;
            REP(i, 0, abs(k - 1))
            {
                cout << "LEFT\n";
            }
            REP(i, 0, n - 1)
            {
                cout << "PRINT " << s[i] << endl;
                cout << "RIGHT\n";
            }
            cout << "PRINT " << s[n - 1];
            return 0;
        }
        else
        {
            pos_should_be = n;
            int i;
            REP(i, 0, abs(k - n))
            {
                cout << "RIGHT\n";
            }
            for (int i = n - 1; i >= 1; i--)
            {
                cout << "PRINT " << s[i] << endl;
                cout << "LEFT\n";
            }
            cout << "PRINT " << s[0];
            return 0;
        }
    }
}