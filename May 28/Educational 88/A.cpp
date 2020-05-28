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
        int n, m, k;
        cin >> n >> m >> k;
        int x = n / k;
        int ase;
        if (x < m)
        {
            ase = x;
            int remaining = m - ase;
            int y = ceil((double)remaining / (k - 1));
            if (y != ase)
                cout << abs(ase - y) << "\n";
            else
                cout << 0 << "\n";
        }
        else
        {
            ase = m;
            cout << ase << "\n";
            continue;
        }
    }
}