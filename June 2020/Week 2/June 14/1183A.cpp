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
    string a;
    cin >> a;
    ll sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += (a[i] - '0');
    }
    if (sum % 4 == 0)
    {
        cout << a << endl;
    }
    else
    {
        ll add = 4 - (sum % 4);
        stringstream geek(a);
        ll x = 0;
        geek >> x;
        for (int i = 0; i < 1000; i++)
        {
            x++;
            sum = 0;
            string wq = to_string(x);
            for (int i = 0; i < wq.size(); i++)
            {
                sum += (wq[i] - '0');
            }
            if (sum % 4 == 0)
            {
                cout << wq << endl;
                return 0;
            }
        }
    }
}