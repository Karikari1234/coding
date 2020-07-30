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
        ll n, k, z;
        cin >> n >> k >> z;
        ll arr[n];
        REP(i, 0, n)
        {
            cin >> arr[i];
        }
        ll ini_ans = arr[0];
        REP(i, 1, k + 1)
        {
            ini_ans += arr[i];
        }
        ll b[k - 1];
        ll mx = INT_MIN;
        ll indx;
        REP(i, 0, k - 1)
        {
            b[i] = arr[i] + arr[i + 1];
            if (b[i] > mx)
            {
                mx = b[i];
                indx = i;
            }
        }
        ll c[k-1];
        REP(i,0,k-1){
            c[i] = b[i];
        }
        sort(b, b + k - 1, greater<int>());
        ll inc = z - indx;
    }
}