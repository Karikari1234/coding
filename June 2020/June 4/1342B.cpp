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
    TEST(test)
    {
        string s;
        cin >> s;
        ll one = 0, zero = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                one++;
            else
                zero++;
        }
        if (one == s.size() || zero == s.size())
        {
            cout << s << endl;
            continue;
        }
        if (s[0] = '0')
            for (int i = 0; i < s.size(); i++)
            {
                cout << "01";
            }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                cout << "10";
            }
        }
        cout << endl;
    }
}