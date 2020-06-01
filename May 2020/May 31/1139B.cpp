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
    int n, i;
    cin >> n;
    ll arr[n];
    REP(i, 0, n)
    {
        cin >> arr[i];
    }
    ll sum = INT_MAX;
    ll ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        sum = min(sum - 1, arr[i]);
        if (sum < 0)
            sum = 0;

        ans += sum;
    }
    
    cout << ans << endl;
}