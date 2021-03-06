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
    string s;
    cin >> s;
    int i;
    char x = CHAR_MIN;
    REP(i, 0, s.size())
    {
        x = max(x, s[i]);
    }
    REP(i, 0, s.size())
    {
        if (x == s[i])
            cout << x;
    }
}