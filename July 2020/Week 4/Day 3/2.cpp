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
    TEST(test){
        ll a,b;
        cin >> a >> b;
        ll n[a],m[b];
        set<ll> s;
        ll ans=0,f=0;
        REP(i,0,a){
            cin >> n[i];
            s.insert(n[i]);
        }
        REP(i,0,b){
            cin >> m[i];
            if(s.find(m[i])!=s.end()){
                f=1;
                ans = m[i];
            }
        }
        if(f){
            cout << "YES\n";
            cout << 1 << " " << ans << endl;
        }
        else{
            cout << "NO\n";
        }
    }
}