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
    ll n;
    cin >> n;
    ll arr[n + 1], sum = 0, cnt = 0, ans = 0;
    REP(i, 1, n + 1)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    REP(i, 1, n + 1)
    {
        cnt += arr[i];
        i++;
    }
    ans = cnt;
    REP(i, 1, n)
    {
        cnt = sum - cnt + arr[i];
        ans = max(ans, cnt);
        //cout << ans << endl;
    }
    cout << ans << endl;
}