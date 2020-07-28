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
        ll ans = -1, turn = 0, first = 0;
        REP(i, 0, n)
        {
            cin >> arr[i];
            if (arr[i] != 1 && !first&&i!=n-1)
            {
                ans = turn;
                first = 1;
            }
            else
            {
                turn = (turn + 1) % 2;
            }
        }
        //cout << ans << endl;
        if (ans != -1)
        {
            if (ans == 0)
            {
                cout << "First\n";
            }
            else if (ans == 1)
            {
                cout << "Second\n";
            }
        }
        else
        {
            if (turn == 0)
            {
                cout << "Second\n";
            }
            else if (turn == 1)
            {
                cout << "First\n";
            }
        }
    }
}