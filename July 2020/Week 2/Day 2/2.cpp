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
        ll a, b, c;
        cin >> a >> b >> c;
        vector<int> v;
        vector<int>::iterator it;
        if (a == 0 && b == 0)
        {
            REP(i, 0, c + 1)
            {
                v.push_back(1);
            }
        }
        else if (b == 0 && c == 0)
        {
            REP(i, 0, a + 1)
            {
                v.push_back(0);
            }
        }
        else if (a == 0 && c == 0)
        {
            REP(i, 0, b + 1)
            {
                v.push_back(i % 2);
            }
        }
        else
        {
            if (a == 0)
            {
                REP(i, 0, c + 1)
                {
                    v.push_back(1);
                }
                REP(i, 0, b)
                {
                    v.push_back(i % 2);
                }
            }
            else if (c == 0)
            {
                REP(i, 0, a + 1)
                {
                    v.push_back(0);
                }
                REP(i, 1, b + 1)
                {
                    v.push_back(i % 2);
                }
            }
            else
            {
                REP(i, 0, a + 1)
                {
                    v.push_back(0);
                }
                REP(i, 0, c + 1)
                {
                    v.push_back(1);
                }
                REP(i, 0, b - 1)
                {
                    v.push_back(i % 2);
                    //cout << "IN\n";
                }
            }
        }
        if (v.size() == a + b + c + 1)
        {
            REP_ITER(it, v)
            {
                cout << *it;
            }
            cout << endl;
        }
        else
        {
            REP_ITER(it, v)
            {
                cout << *it;
            }
            cout << endl;
        }
    }
}