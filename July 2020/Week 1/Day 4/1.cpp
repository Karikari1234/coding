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
        string s[9];
        REP(i, 0, 9)
        {
            cin >> s[i];
        }
        ll k;
        i=0;
        j=0;
        REP(k, 0, 3)
        {
            REP(i, k, 9)
            {
                if (s[i][j] != '9')
                    s[i][j]++;
                else
                    s[i][j] = '1';
                //cout << i << " " << j << endl;
                j++;
                i += 2;
            }
        }

        //cout << endl;
        REP(i, 0, 9)
        {
            REP(j, 0, 9)
            {
                cout << s[i][j];
            }
            cout << endl;
        }
    }
}