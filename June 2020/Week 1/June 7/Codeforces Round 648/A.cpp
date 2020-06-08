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
    TEST(test)
    {
        ll n, m;
        cin >> n >> m;
        int arr[n][m];
        si row, column;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 1)
                {
                    row.insert(i);
                    column.insert(j);
                }
            }
        }
        ll remain_row = n - row.size();
        ll remain_column = m - column.size();
        if (min(remain_row, remain_column) % 2)
        {
            cout << "Ashish\n";
        }
        else
        {
            cout << "Vivek\n";
        }
    }
}
