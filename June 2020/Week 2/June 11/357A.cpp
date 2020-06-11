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

int main()
{
    FASTIO;
    ll n;
    cin >> n;
    int arr[n], i, prefix[n], sum = 0;
    REP(i, 0, n)
    {
        cin >> arr[i];
        sum += arr[i];
        prefix[i] = sum;
    }
    ll x, y;
    cin >> x >> y;
    if (sum >= x && sum <= y)
    {
        cout << 1 << endl;
        return 0;
    }
    REP(i, 0, n)
    {
        //cout << prefix[i] << " and " << sum - prefix[i] << endl;
        if ((prefix[i] >= x && prefix[i] <= y) && (sum - prefix[i] >= x && sum - prefix[i] <= y))
        {
            cout << i + 2 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}