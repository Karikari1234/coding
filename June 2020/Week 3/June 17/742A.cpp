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
    ll n;
    cin >> n;
    if(n==0){
        cout << 1 << endl;
    }
    else{
        ll q = n%4;
        if(q == 0){
            cout << 6 << endl;
        }
        else if(q == 1){
            cout << 8 << endl;
        }
        else if(q == 2){
            cout << 4 << endl;
        }
        else cout << 2 << endl;
    }
}