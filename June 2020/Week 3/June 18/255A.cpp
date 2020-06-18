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
ll a[3];
int main()
{
    FASTIO;
    ll n;
    cin >> n;
    ll arr[n];
    int i, j;
    REP(i, 0, n)
    {
        cin >> arr[i];
        a[i % 3] += arr[i];
        //cout << a[0] << " " << a[1] << " " << a[2] << endl;
    }
    //cout << a[0] << " " << a[1] << " " << a[2] << endl;
    ll maxxima = *max_element(a, a + 3);
    if (maxxima == a[0])
    {
        cout << "chest\n";
    }
    else if (maxxima == a[1])
    {
        cout << "biceps\n";
    }
    else
    {
        cout << "back\n";
    }
}