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
int neg, pos;
int main()
{
    FASTIO;
    int n;
    cin >> n;
    int x[n], y[n];
    int i;
    REP(i, 0, n)
    {
        cin >> x[i] >> y[i];
        if (x[i] > 0)
            pos++;
        else
            neg++;
    }
    if (neg >= n - 1 || pos >= n - 1)
        YES;
    else
        NO;
}