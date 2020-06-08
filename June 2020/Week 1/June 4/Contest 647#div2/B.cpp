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
        ll n, flag = 0;
        cin >> n;
        ll arr[n];
        multiset<ll> ms;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ms.insert(arr[i]);
        }
        multiset<ll> tst;
        for (int i = 1; i < 3000; i++)
        {
            ll x = i;
            for (int j = 0; j < n; j++)
            {
                tst.insert(arr[j] xor x);
            }
            if (tst == ms)
            {
                cout << x << endl;
                flag = 1;
                break;
            }
            tst.clear();
        }
        if (!flag)
            cout << -1 << endl;
    }
}