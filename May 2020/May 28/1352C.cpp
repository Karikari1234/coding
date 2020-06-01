#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define REP(i, a, b) for (i = a; i < b; i++)

#define FASTIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(0)

#define TEST(test) \
    cin >> test;   \
    while (test--)

#define YES cout << "YES\n"
#define NO cout << "NO\n"

int main()
{
    FASTIO;
    int test;
    TEST(test)
    {
        ll a, b;
        cin >> a >> b;
        int prev = 0;
        int nw = b / a;
        while (nw != prev)
        {
            b += (nw - prev);
            prev = nw;
            nw = b / a;
        }
        cout << b << endl;
    }
}