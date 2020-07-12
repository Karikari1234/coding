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
int i, j, k;
int main()
{
    FASTIO;
    TEST(test)
    {
        ll n, flag1 = 0, flag2 = 0, a = -1, b = -1, c = -1, w = -1, q = -1, not_changed = 1;
        cin >> n;
        ll arr[n];
        REP(i, 0, n)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (i + 1 <= n - 1 && i - 1 >= 0)
            {
                for (int j = 0; j < i; j++)
                {
                    if (arr[j] < arr[i])
                    {
                        if (a == -1)
                        {
                            a = j + 1;
                        }
                    }
                }
                for (int k = i + 1; k < n; k++)
                {
                    if (arr[k] < arr[i])
                    {
                        if (c == -1)
                        {
                            c = k + 1;
                        }
                    }
                }
                if (a != -1 && c != -1 && b == -1)
                {
                    b = i + 1;
                }
                else if (a != -1 && c != -1 && b != -1)
                {
                }
                else
                {
                    a = -1, b = -1, c = -1;
                }
            }
        }
        if (a != -1 && b != -1 && c != -1)
        {
            YES;
            cout << a << " " << b << " " << c << endl;
        }
        else
        {
            NO;
        }
    }
}