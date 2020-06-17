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
    ll n;
    cin >> n;
    int i;
    vector<ll> arr(n);
    REP(i, 0, n)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            arr[i]--;
        }
    }
    REP(i, 0, n)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}