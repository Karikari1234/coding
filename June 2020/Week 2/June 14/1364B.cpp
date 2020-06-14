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
        ll n;
        cin >> n;
        vector<ll> v(n + 5);
        int i;
        REP(i, 0, n)
        cin >> v[i];
        ll positive = 1;
        vector<ll> a;
        vector<ll>::iterator it;
        a.push_back(v[0]);
        for (int i = 1; i < n; i++)
        {
            if (positive == 1 && v[i] - v[i - 1] >= 0)
            {
                //cout << "1\n";
                continue;
            }
            else if (positive == 1 && v[i] - v[i - 1] < 0)
            {
                //cout << "2\n";
                positive = 0;
                if (i != 1)
                {
                    //cout << "3\n";
                    a.push_back(v[i - 1]);
                }
            }
            else if (positive == 0 && v[i] - v[i - 1] >= 0)
            {
                //cout << "3\n";
                positive = 1;
                a.push_back(v[i - 1]);
            }
            else
            {
                //cout << "4\n";
                continue;
            }
        }
        a.push_back(v[n - 1]);
        cout << a.size() << endl;
        for (it = a.begin(); it != a.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
}