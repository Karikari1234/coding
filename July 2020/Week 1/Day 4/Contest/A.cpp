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
        ll n;
        cin >> n;
        ll arr[n];
        REP(i, 0, n)
        {
            cin >> arr[i];
            //arr[i] = abs(arr[i]);
        }
        ll a, b;
        REP(i, 0, n - 1)
        {
            if (arr[i + 1] - arr[i] > 0)
            {
                a++;
            }
            else if (arr[i + 1] - arr[i] < 0)
            {
                b++;
            }
            else
            {
                a++;
                b++;
            }
        }
        while (a != b)
        {
            //changes = 0, a = 0, b = 0;
            for (int j = 0; j < n - 1; j++)
            {
                if (arr[i + 1] - arr[i] < 0 && a < b)
                {
                    ll x = abs(arr[i]);
                    ll y = abs(arr[i + 1]);
                    if (y - x > 0)
                    {
                        arr[i] = abs(arr[i]);
                        arr[i + 1] = abs(arr[i + 1]);
                    }
                    else if (y < x)
                    {
                        arr[i] = arr[i] * -1;
                    }
                }
                if (arr[i + 1] - arr[i] > 0 && a > b)
                {
                    ll x = abs(arr[i]);
                    ll y = abs(arr[i + 1]);
                    if (y - x < 0)
                    {
                        arr[i] = abs(arr[i]);
                        arr[i + 1] = abs(arr[i + 1]);
                    }
                    else if (y > x)
                    {
                        arr[i] *= -1;
                    }
                }
            }
        }
        REP(i, 0, n - 1)
        {
            cout << arr[i + 1] - arr[i] << " ";
        }
        cout << endl;
    }
}