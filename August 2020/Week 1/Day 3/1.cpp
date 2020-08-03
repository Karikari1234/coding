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
ll a[100005], b[100005], ex[100005];
int main()
{
    FASTIO;
    ll n;
    cin >> n;
    REP(i, 1, n + 1)
    {
        cin >> a[i];
    }
    memset(b, -1, sizeof(b));
    REP(i,2,n+1){
        if(a[i]!=a[i-1]){
            b[i]=a[i-1];
            ex[b[i]]=1;
        }
    }
    ex[a[n]]=1;
    int m = 0;
    REP(i,1,n+1){
        while(ex[m])
        m++;
        if(b[i]==-1){
            b[i]=m;
            ex[m]=1;
        }
        cout << b[i] << " ";
    }
}