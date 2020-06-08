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

int main()
{
    FASTIO;
    double d, h, v, e, ans;
    cin >> d >> h >> v >> e;
    double ini = pi * (d / 2) * (d / 2) * h;
    double grow_per_sec = pi * (d / 2) * (d / 2) * e;
    //cout << grow_per_sec << endl;
    //cout << ini << endl;
    if (grow_per_sec >= v)
    {
        NO;
        return 0;
    }
    else
    {
        double komtese = v - grow_per_sec;
        YES;
        cout << setprecision(13) << ini / komtese << endl;
        return 0;
    }
}