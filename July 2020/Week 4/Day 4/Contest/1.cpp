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
        string beg, end;
        char carr[26];
        char z = 'a';
        REP(i, 0, 26)
        {
            carr[i] = z;
            z++;
        }
        int car_count = 0;
        if (arr[0] == 0)
        {
            cout << carr[++car_count % 26];
            cout << endl;
        }
        else if (arr[0])
        {
            REP(j, 0, arr[0])
            cout << carr[car_count % 26];
            cout << endl;
        }
        REP(i, 0, n - 1)
        {
            if (max(arr[i], arr[i + 1]) == 0)
            {
                cout << carr[++car_count % 26];
                cout << endl;
            }
            else
            {
                for (int j = 0; j < max(arr[i], arr[i + 1]); j++)
                {
                    cout << carr[car_count];
                }
                cout << endl;
            }
        }
        if (arr[n - 1] == 0)
        {
            cout << carr[++car_count % 26];
            cout << endl;
        }
        else if (arr[n - 1])
        {
            REP(j, 0, arr[n - 1])
            cout << carr[car_count % 26];
            cout << endl;
        }
    }
}