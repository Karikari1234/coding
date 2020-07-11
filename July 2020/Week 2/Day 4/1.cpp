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
#define YES cout << "Yes\n"
#define NO cout << "No\n"

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
        ll n, flag = 0;
        cin >> n;
        ll arr[n + 1];
        map<ll, ll> mp;
        map<ll, ll>::iterator it;
        REP(i, 0, n)
        {
            cin >> arr[i];
            mp[arr[i]] = i + 1;
        }
        ll max_index = n, set = 0, previous, next_max, frst;
        REP_ITER(it, mp)
        {
            if (!set)
            {
               
                if (it->second == max_index)
                {
                    max_index--;
                   
                }
                else
                {
                    set = 1;
                    next_max = it->second - 1;
                    previous = it->second;
                }
            }
            else if (set && it->second != max_index)
            {
         
                if (it->second != previous + 1)
                {
                    flag = 1;
                }
                previous = it->second;
            }
            else if (set && it->second == max_index)
            {
       
                if (it->second != previous + 1)
                {
                    flag = 1;
                }
                set = 0;
                max_index = next_max;
            }
        }
        if (!flag)
        {
            YES;
        }
        else
        {
            NO;
        }
    }
}