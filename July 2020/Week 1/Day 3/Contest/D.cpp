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
        map<char, int> mp;
        map<char, int>::iterator it;
        ll a, b;
        ll flag = 0;
        cin >> a >> b;
        string x, y;
        cin >> x >> y;
        string z;
        cin >> z;
        // cout << a << b << endl;
        //cout << x << endl;
        //cout << y << endl;
        //cout << z << endl;
        REP(i, 0, a)
        {
            char q = x[i];
            //cout << q << endl;
            it = mp.find(q);
            if (it != mp.end())
            {
                if (y[i] - '0' < it->second)
                {
                    it->second = y[i] - '0';
                    //cout << q << " inside " << y[i] << endl;
                }
            }
            else
            {
                mp[q] = y[i] - '0';
                //cout << q << " outside " << y[i] << endl;
            }
        }
        ll cost = 0;
        REP(i, 0, b)
        {
            it = mp.find(z[i]);
            if (it != mp.end())
            {
                cost += it->second;
                //cout << cost << " added " << endl;
            }
            else
            {
                flag = 1;
            }
        }
        if (!flag)
        {
            cout << cost << endl;
        }
        else
        {
            cout << -1 << endl;
            //cout << "outtt\n";
        }
    }
}