// Find x greater or equal to a given number from an array...
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
    int x;
    int arr[22] = {1, 2, 3, 4, 3, 535, 436, 3, 5, 412, 1, 31, 31, 31, 312, 423, 52, 5234, 123, 1234, 1, 412412};
    sort(arr, arr + 22);
    cin >> x;
    int L = 0, R = 21;
    int ans = INT_MAX;
    while (L <= R)
    {
        int mid = L + (R - L) / 2;
        if (arr[mid] >= x)
        {
            ans = min(ans, arr[mid]);
            R = mid - 1;
        }
        else
        {
            L = mid + 1;
        }
    }
    cout << ans << endl;
}