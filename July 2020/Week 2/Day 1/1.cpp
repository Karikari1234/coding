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

struct hash_pair
{
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2> &p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};
int main()
{
    FASTIO;
    TEST(test)
    {
        string s;
        cin >> s;
        set<pair<ll, ll> > coordinates;
        ll x = 0, y = 0, ans = 0;
        pair<ll, ll> ini(x, y);
        //coordinates[ini] = true;
        REP(i, 0, s.size())
        {
            ll p = x;ll z =y;
            if (s[i] == 'N')
                y++;
            if (s[i] == 'S')
                y--;
            if (s[i] == 'E')
                x++;
            if (s[i] == 'W')
                x--;

            //pair<ll, ll> pr(x, y);
            if (coordinates.count({p+x,z+y}))
                ans++;
            else
                ans += 5, coordinates.insert({p+x,z+y});
        }
        cout << ans << endl;
        coordinates.clear();
    }
}