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
    TEST(test)
    {
        ll n, x, cnt = 0, boro, maxima = INT_MIN, cnt2 = 0, boro2 = 0;
        cin >> n >> x;
        vector<ll> v(n + 5), pref(n + 5), arr(n + 5), arr2(n + 5);
        int i;
        REP(i, 0, n)
        {
            cin >> v[i];
            //m[i] = v[i];
            if (v[i] % x == 0)
                cnt++;
            arr[i + 1] += arr[i] + v[i];
            if (arr[i + 1] % x != 0)
                boro = i + 1;
            
        }
        
        if (cnt == n)
        {
            cout << -1 << endl;
            return 0;
        }
        ll ini = 0;
        for (int j = n - 1, i = 0; j >= 0; j--, i++)
        {
            arr2[i + 1] += arr2[i] + v[j];
            if (arr2[i + 1] % x != 0)
                boro2 = i + 1;
            
        }
        
        cout << max(boro, boro2) << endl;
    }
}