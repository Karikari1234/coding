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
        ll row, col, flag = 0;
        cin >> row >> col;
        ll arr[row][col], ideal[row][col];
        REP(i, 0, row)
        {
            REP(j, 0, col)
            {
                ll x = 0;
                cin >> arr[i][j];
                if (i + 1 < row)
                {
                    x++;
                }
                if (i - 1 >= 0)
                {
                    x++;
                }
                if (j + 1 < col)
                {
                    x++;
                }
                if (j - 1 >= 0)
                {
                    x++;
                }
                if (arr[i][j] > x)
                {
                    flag = 1;
                }
                ideal[i][j] = x;
            }
        }
        if (flag == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            REP(i, 0, row)
            {
                REP(j, 0, col)
                {
                    cout << ideal[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
}