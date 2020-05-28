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

int main()
{
    ios::sync_with_stdio(false);
    FASTIO;
    int test;
    TEST(test)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((a == c) && (b + d == a))
        {
            cout << "YES\n";
        }
        else if ((a == d) && (b + c == a))
        {
            cout << "YES\n";
        }
        else if ((b == c) && (a + d == b))
        {
            cout << "YES\n";
        }
        else if ((b == d) && (a + c == b))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}