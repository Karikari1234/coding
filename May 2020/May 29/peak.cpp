// find the peak value of an array where it is line   .
//                                                   . .
//                                                 .    .

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define REP(i, a, b) for (i = a; i < b; i++)
#define REP_ITER(it, v) for (it = v.begin(); it != v.end(); it++)

#define FASTIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(0)

#define TEST(test) \
    cin >> test;   \
    while (test--)

#define YES cout << "YES\n"
#define NO cout << "NO\n"

#define vi vector<int>
#define vi_iterator vector<int>::iterator

#define si set<int>
#define si_iterator set<int>::iterator

int main()
{
    FASTIO;
    ll arr[10] = {-1000, 2, 3, 4, 5, 6, 5, 4, 3, 2};
    ll L = 1, R = 9;
    ll ans = -100000;
    while (L <= R)
    {
        ll mid = L + (R - L) / 2;
        if (arr[mid] > arr[mid - 1])
        {
            ans = arr[mid];
            L = mid + 1;
        }
        else
        {
            R = mid - 1;
        }
    }
    cout << ans << endl;
}