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
    ll s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    ll a = (2 * t1) + s * (v1);
    ll b = (2 * t2) + s * (v2);
    if (a == b)
    {
        cout << "Friendship\n";
    }
    else if (a < b)
    {
        cout << "First\n";
    }
    else
    {
        cout << "Second\n";
    }
}