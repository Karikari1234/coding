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
        ll n,flag=0;
        cin >> n;
        ll p[n],c[n];
        REP(i,0,n){
            cin >> p[i] >> c[i];
            if(c[i]>p[i]){
                flag=1;
            }
            if(i!=0){
                if(p[i]<p[i-1]||c[i]<c[i-1]){
                    flag = 1;
                }
                if(c[i]-c[i-1]>p[i]-p[i-1]){
                    flag=1;
                }
            }
        }
        if(!flag)YES;
        else NO;
    }
}