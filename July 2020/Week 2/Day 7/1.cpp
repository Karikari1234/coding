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

int cmp(pair<ll, pair<ll, ll>> x, pair<ll, pair<ll, ll>> y)
{
    auto it1 = x;
    auto it2 = y;
    if (it1.first < it2.first)
        return 1;
    if (it1.first == it2.first && it1.second.first + it1.second.second > it2.second.first + it2.second.second)
        return 1;
    return 0;
}
int main()
{
    FASTIO;
    ll n, k,ans=0;
    cin >> n >> k;
    multiset<ll> a, b, both;
    multiset<ll>::iterator ita, itb, itboth;
    ll likea = 0, likeb = 0;
    REP(i, 0, n)
    {
        ll t, x, y;
        cin >> t >> x >> y;
        if (x & y)
            both.insert(t), likea++, likeb++;
        else if (x)
            a.insert(t), likea++;
        else if(y)
            b.insert(t), likeb++;
    }
    if (likea < k || likeb < k)
    {
        cout << -1 << endl;
        return 0;
    }
    else
    {
        ita = a.begin();
        itb = b.begin();
        itboth = both.begin();
        ll  al = k, bl = k;
        while (al > 0 || bl > 0)
        {
            if (al > 0 && bl > 0)
            {
                if (ita == a.end() || itb == b.end())
                {
                    ans += *itboth;
                    itboth++;
                    al--;
                    bl--;
                }
                else
                {
                    if (itboth != both.end())
                    {
                        if (*ita + *itb < *itboth)
                        {
                            ans += *ita + *itb;
                            ita++;
                            itb++;
                            al--;
                            bl--;
                        }
                        else
                        {
                            ans += *itboth;
                            itboth++;
                            al--;
                            bl--;
                        }
                    }
                    else
                    {
                        ans += *ita;
                        ans += *itb;
                        ita++;
                        itb++;
                        al--;
                        bl--;
                    }
                }
            }
            else if (al > 0)
            {
                if (itboth == both.end())
                {
                    ans += *ita;
                    ita++;
                    al--;
                }
                else if (ita == a.end())
                {
                    ans += *itboth;
                    itboth++;
                    al--;
                    bl--;
                }
                else
                {
                    if (*ita < *itboth)
                    {
                        ans += *ita;
                        ita++;
                        al--;
                    }
                    else
                    {
                        ans += *itboth;
                        itboth++;
                        al--;
                        bl--;
                    }
                }
            }
            else if (bl > 0)
            {
                if (itboth == both.end())
                {
                    ans += *itb;
                    itb++;
                    bl--;
                }
                else if (itb == a.end())
                {
                    ans += *itboth;
                    itboth++;
                    bl--;
                    al--;
                }
                else
                {
                    if (*itb < *itboth)
                    {
                        ans += *itb;
                        itb++;
                        bl--;
                    }
                    else
                    {
                        ans += *itboth;
                        itboth++;
                        bl--;
                        al--;
                    }
                }
            }
        }
        
    }
    cout << ans << endl;
}