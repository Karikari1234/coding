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
int i, j;
int main()
{
    FASTIO;
    TEST(test)
    {
        ll n;
        string s;
        cin >> n >> s;
        ll a = 0, ansl = 0, ansr = 0;
        REP(i, 0, s.size())
        {
            if (s[i] == ')' && a == 0)
            {
                ansl++;
            }
            else if (s[i] == '(')
            {
                a++;
            }
            else if (s[i] == ')' && a > 0)
            {
                a--;
            }
        }
        a = 0;
        for (i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '(' && a == 0)
            {
                ansr++;
            }
            else if (s[i] == ')')
            {
                a++;
            }
            else if (s[i] == '(' && a > 0)
            {
                a--;
            }
        }
        cout << min(ansl, ansr) << endl;
    }
}