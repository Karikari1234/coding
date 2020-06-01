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
    int test;
    TEST(test)
    {
        double h, c, t;
        cin >> h >> c >> t;
        if (t <= (double)(h + c) / 2)
        {
            cout << 2 << endl;
            continue;
        }
        if (h == t)
        {
            cout << 1 << "\n";
            continue;
        }
        else if ((h + c) / 2 == (double)t)
        {
            cout << 2 << "\n";
            continue;
        }
        else
        {
            double up = c - t;
            //cout << up << endl;
            double down = h + c - (2 * t);
            //cout << down << endl;
            double q = up / down;
            //cout << q << endl;
            int ans_min = 2*ceil(q)-1;
            int ans_max = 2*floor(q)-1;
            //cout << 2 * (int)q - 1 << endl;
            continue;
        }
    }
}