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
    vector<ll> v(26000);
        REP(i,0,26000){
            v[i] = (2*(i+1))+(3*((i+1)*i)/2);
            //cout << (2*i)+(3*((i-1)*i)/2) << endl;
        }
    TEST(test){
        ll n;
        cin >> n;
        ll ans =0;
        while(n>1){
            //cout << "IN\n";
            vector<ll>::iterator it;
            it = lower_bound(v.begin(),v.end(),n+1);
            //cout << *(it-1) << endl;
            n-=*(it-1);
            ans++;
        }
        cout << ans << endl;
    }
}
