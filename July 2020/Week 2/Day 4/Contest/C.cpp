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
        ll n, mil = 0;
        cin >> n;
        ll arr[n], barra[n] = {0};
        map<ll, ll> mp;
        map<ll, ll>::iterator it;
        REP(i, 0, n)
        {
            cin >> arr[i];
            mp[arr[i]] = i + 1;
            if (i + 1 == arr[i])
            {
                mil++;
                barra[i] = 1;
            }
        }
        ll sq=0,set=0;
        REP(i,0,n){
            if(!set and barra[i]==0){
                sq++;
                set=1;
            }
            if(set&&barra[i]==1){
                set=0;
            }
        }
        if (mil == 0||sq==1)
        {
            cout << 1 << endl;
        }
        else if (mil == n)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}