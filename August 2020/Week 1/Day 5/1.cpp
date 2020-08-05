#include <bits/stdc++.h>
#include <numeric> 

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
    ll n;
    cin >> n;
    ll arr[n];
    REP(i, 0, n) {
        cin >> arr[n];
    }
    multiset<ll> ms;
    REP(i, 0, n) {
        REP(j, 0, n) {
            if (i!=j) {
                ms.insert(lcm(arr[i], arr[j]));
            }
        }
    }
    ll ans;
    auto it = ms.begin();
    ll a = *it, b=-1;
    cout << a << endl;
    it++;
    for (it;it!=ms.end();it++) {
        if (b!=-1) {
            b=__gcd(b, *it);
        }
        else if (b==-1) {
            b=*it;
            b=__gcd(a, *it);
        }
    }
    if (b==-1) {
        b=a;
    }
    cout << b << endl;
}