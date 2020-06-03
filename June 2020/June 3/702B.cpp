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

const int biggg = (int)2e9;

int main()
{
    FASTIO;
    int n;
    cin >> n;
    int i, arr[n];
    REP(i, 0, n)
    {
        cin >> arr[i];
    }
    int curr = 1;
    ll power[200000];
    REP(i, 0, 32)
    {
        curr *= 2;
        if (curr < biggg)
            power[curr] = 1;
    }
    int j, k, ans = 0;
    REP(j, 0, n - 1)
    {
        REP(k, j + 1, n)
        {
            if (power[arr[k] + arr[j]])
                ans++;
        }
    }
    cout << ans << endl;
}