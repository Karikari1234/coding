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
#define YES cout << "Yes\n"
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
        ll n;
        cin >> n;
        ll arr[n + 5];
        ll four[] = {1, 3, 0, 2};
        ll five[] = {0, 2, 4, 1, 3};
        ll six[] = {0, 2, 4, 1, 3, 5};
        ll seven[] = {1, 4, 0, 2, 6, 3, 5};
        ll det = n % 4;
        ll bg = 1;
        ll cnt = 0;
        if (n < 4)
        {
            cout << -1 << endl;
            continue;
        }
        REP(i, 1, n / 4)
        {
            REP(j, 0, 4)
            {
                arr[cnt++] = bg + four[j];
            }
            bg += 4;
        }
        if (det == 0)
        {
            REP(j, 0, 4)
            {
                arr[cnt++] = bg + four[j];
            }
        }
        else if (det == 1)
        {
            REP(j, 0, 5)
            {
                arr[cnt++] = bg + five[j];
            }
        }
        else if (det == 2)
        {
            REP(j, 0, 6)
            {
                arr[cnt++] = bg + six[j];
            }
        }
        else if (det == 3)
        {
            REP(j, 0, 7)
            {
                arr[cnt++] = bg + seven[j];
            }
        }
        REP(i, 0, n)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}