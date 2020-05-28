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
    int test;
    TEST(test)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        string a[n];
        int i, j;
        REP(i, 0, n)
        {
            cin >> a[i];
        }
        int always_prefer = y;
        if (2 * x < y)
        {
            always_prefer = 2 * x;
        }
        int cost = 0;
        for (size_t i = 0; i < n; i++)
        {
            //cout << "Row = " << i + 1 << endl;
            for (size_t j = 0; j < m; j++)
            {
                //cout << j << endl;
                if (a[i][j] == '.' && j + 1 < m && a[i][j + 1] == '.')
                {
                    //cout << "double done\n";
                    cost += always_prefer;
                    j++;
                }
                else if (a[i][j] == '.')
                {
                    //cout << "single\n";
                    cost += x;
                }
                else
                {
                    //cout << "NOt WHITE\n";
                }
            }
        }
        //cout << "COST = " << cost << endl;
        cout << cost << endl;
    }
}