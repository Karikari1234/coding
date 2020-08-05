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
    TEST(test) {
        ll n, tot=0;
        cin >> n;
        ll arr[n+5]={};
        REP(i, 0, n) {
            ll x;
            cin >> x;
            arr[x]++;


        }

        if (n==1) {
            cout << 0 << endl;
            continue;
        }
        for (int i=2;i<=2*n;i++) {
            ll cur_ans =0;

            for (j=1;j<=min(i/2, (int)n);j++) {
                if (j==i-j&&arr[j]&&arr[i-j]&&i-j<=n) {
                    cur_ans+=(arr[i-j])/2;
                }
                else if (arr[j]&&arr[i-j]&&i-j<=n)
                    cur_ans+=(min(arr[j], arr[i-j]));
            }
            tot=max(tot, cur_ans);
        }
        cout << tot << endl;

    }
}