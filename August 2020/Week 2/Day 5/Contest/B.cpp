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
    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    ll r = x, c = y;
    
    cout << x << " " << y << endl;
    ll arr[n + 1][m + 1];

    REP(i, 1, n + 1)
    {
        REP(j, 1, m + 1)
        {
            arr[i][j] = 0;
        }
    }
    arr[x][y] = 1;
    ll l_r, l_c;
    REP(i, 2, m)
    {
        if (arr[x][i] != 1)
        {
            cout << x << " " << i << endl;
            arr[x][i] = 1;
            l_r = x, l_c = i;
        }
    }

    if (y == m - 1)
    {
        if (x != 2)
        {
            arr[x - 1][y - 1] = 1;
            cout << x - 1 << " " << y - 1 << endl;
        }
        else if (x != n - 1)
        {
            arr[x + 1][y - 1] = 1;
            cout << x + 1 << " " << y - 1 << endl;
        }
    }
    ll f = 0;
    for (int i = x - 1; i >= 2; i--)
    {
        if (f % 2 == 0)
        {
            for (int j = m - 1; j >= 2; j--)
            {
                if (arr[i][j] != 1)
                {
                    cout << i << " " << j << endl;
                    arr[i][j] = 1;
                }
            }
            f++;
        }
        else
        {
            for (int j = 2; j <= m - 1; j++)
            {
                if (arr[i][j] != 1)
                {
                    cout << i << " " << j << endl;
                    arr[i][j] = 1;
                }
            }
            f++;
        }
    }

    for (int i = x + 1; i <= n - 1; i++)
    {
        if (f % 2 == 0)
        {
            for (int j = m - 1; j >= 2; j--)
            {
                if (arr[i][j] != 1)
                {
                    cout << i << " " << j << endl;
                    arr[i][j] = 1;
                    //l_r = i, l_c = j;
                }
            }
            f++;
        }
        else
        {
            for (int j = 2; j <= m - 1; j++)
            {
                if (arr[i][j] != 1)
                {
                    cout << i << " " << j << endl;
                    arr[i][j] = 1;
                }
            }
            f++;
        }
    }
    ll row = n, col;
    if (f % 2 == 0)
    {
        col = m - 1;
    }
    else
    {
        col = 2;
    }
    cout << row << " " << col << endl;
    arr[row][col] = 1;
    REP(i, 1, m + 1)
    {
        if (arr[n][i] != 1)
        {
            cout << n << " " << i << endl;
            arr[n][i] = 1;
        }
    }
    for (int i = n - 1; i >= 1; i--)
    {
        if (arr[i][m] != 1)
        {
            cout << i << " " << m << endl;
            arr[i][m] = 1;
        }
    }
    for (int i = m - 1; i >= 1; i--)
    {
        if (arr[1][i] != 1)
        {
            cout << 1 << " " << i << endl;
            arr[1][i] = 1;
        }
    }
    for (int i = 2; i <= n - 1; i++)
    {
        if (arr[i][1] != 1)
        {
            cout << i << " " << 1 << endl;
            arr[i][1] = 1;
        }
    }
}