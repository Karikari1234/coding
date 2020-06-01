//Will implement later
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define REP(i, a, b) for (i = a; i < b; i++)
#define REP_ITER(it, v) for (it = v.begin(); it != v.end(); it++)

#define FASTIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(0)

#define TEST(test) \
    cin >> test;   \
    while (test--)
#define cll(a, b) cin >> a >> b

#define YES cout << "YES\n"
#define NO cout << "NO\n"

#define vi vector<int>
#define vi_iterator vector<int>::iterator

#define si set<int>
#define si_iterator set<int>::iterator
int barr[301];

int main()
{
    FASTIO;
    int test;
    TEST(test)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] <= 200)
                barr[arr[i]] = 1;
        }
        for (int i = 1; i < 201; i++)
        {
            if (barr[i] == 0 && x > 0)
            {
                x--;
                barr[i] = 1;
            }
        }
        int ans = INT_MAX;
        for (int i = 1; i < 201; i++)
        {
            if (barr[i] == 0)
            {
                ans = min(ans, barr[i - 1]);
            }
        }
        cout << ans << endl;
    }
}