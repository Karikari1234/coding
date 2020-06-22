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
        ll n, d;
        cin >> n >> d;
        ll arr[n];
        REP(i, 0, n)
        {
            cin >> arr[i];
        }
        ll a = arr[0];
        ll q = 1;
        REP(i, 1, n)
        {
            while (arr[i] != 0)
            {

                if (d >= i && d > 0)
                {
                    //cout << d << " days left\n";
                    a += 1;
                    arr[i]--;
                    if (d >= i)
                        d -= (i);
                    else
                    {
                        goto ala;
                    }
                }
                else
                {
                    //cout << a << endl;
                    break;
                }
            }
        }
    ala:
        cout << a << endl;
    }
}