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

#define cll(a, b) cin >> a >> b
#define YES cout << "YES\n"
#define NO cout << "NO\n"

#define vi vector<int>
#define vi_iterator vector<int>::iterator

#define si set<int>
#define si_iterator set<int>::iterator
int i, j, k, l;
int n, m;
int a, b;
int main()
{
    FASTIO;
    int test;
    TEST(test)
    {
        cin >> n >> m;
        cout << 'W';
        REP(i, 0, n)
        {
            REP(j, 0, m)
            {
                if (i == 0)
                {
                    if (j != 0)
                    {
                        cout << 'B';
                    }
                    else
                    {
                    }
                }
                else
                {
                    cout << 'B';
                }
            }
            cout << '\n';
        }
    }
}