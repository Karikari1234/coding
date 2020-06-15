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
    ll l, r;
    cin >> l >> r;
    int i;
    REP(i, l, r + 1)
    {
        string x = to_string(i);
        int j, flag = 0;
        map<char, int> mp;
        REP(j, 0, x.size())
        {
            mp[x[j]]++;
            if (mp[x[j]] > 1)
            {
                flag = 1;
            }
        }
        if (!flag)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}