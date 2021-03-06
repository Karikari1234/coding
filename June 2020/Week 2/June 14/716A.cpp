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

int main()
{
    FASTIO;
    ll n, c;
    cin >> n >> c;
    int i;
    ll arr[n];
    REP(i, 0, n)
    {
        cin >> arr[i];
    }
    ll total = 1;
    REP(i, 1, n)
    {
        if (arr[i] - arr[i - 1] > c)
        {
            total = 1;
        }
        else
            total++;
    }
    cout << total << endl;
    ;
}