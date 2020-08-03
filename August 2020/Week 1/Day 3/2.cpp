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
        ll n, on = 1;
        cin >> n;
        ll arr[n + 5];
        set<pair<ll, pair<ll, ll>>> s;
        s.insert({-n, {1, n}});
        while (!s.empty())
        {
            auto z = *s.begin();
            ll l = z.second.first;
            ll r = z.second.second;

            s.erase(z);
            if (l > r)
                continue;
            if (l == r)
            {
                arr[l] = on++;
                continue;
            }

            ll mid;
            if ((r - l + 1) % 2 != 0)
                mid = (l + r) / 2;
            else
                mid = (l + r - 1) / 2;
            arr[mid] = on++;
            s.insert({-(mid - l), {l, mid - 1}});
            s.insert({-(r - mid), {mid + 1, r}});
        }
        REP(i, 1, n + 1)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}