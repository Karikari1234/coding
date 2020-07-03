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
        }
        i = 0, j = n - 1;
        ll move = 0, a = 0, b = 0, big = 0;
        while (i <= j)
        {
            if (move % 2 == 0)
            {
                ll curr = 0;
                while (curr <= big &&i <= j)
                {
                    a += arr[i];
                    curr += arr[i];
                    i++;
                }
                move++;
                big = curr;
                //cout << "big  " << big << endl;
            }
            else
            {
                ll curr = 0;
                while (curr <= big&&i <= j)
                {
                    b += arr[j];
                    curr += arr[j];
                    j--;
                }
                move++;
                big = curr;
                //cout << "big  " << big << endl;
            }
            //cout << move << " " << a << " " << b << endl;
        }
        //cout << endl;
        cout << move << " " << a << " " << b << endl;
        //cout << endl;
    }
}