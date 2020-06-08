//code thik ase , log2 er jonno maara khaitese pore change korsi arki//
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
        ll a, b;
        cin >> a >> b;
        ll ans = 0;
        ll boro = max(a, b);
        ll choto = min(a, b);
        if (boro == choto)
        {
            cout << 0 << endl;
            continue;
        }
        if (boro % choto == 0 && (boro / choto) % 2 == 0)
        {
            ll examine = boro / choto;
            ll ans = 0;
            while (examine % 2 == 0 && examine > 0)
            {
                if (examine % 8 == 0)
                {
                    examine /= 8;
                    ans++;
                }
                else if (examine % 4 == 0)
                {
                    examine /= 4;
                    ans++;
                }
                else if (examine % 2 == 0)
                {
                    examine /= 2;
                    ans++;
                }
            }
            if (examine != 1)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << ans << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
}