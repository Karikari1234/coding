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
int i;

ll maxSubArraySum(ll a[], ll size, ll max_so_far)
{
    ll max_ending_here = 0;

    for (int i = 0; i < size; i++)
    {
        //cout << " a iii " << a[i] << endl;
        max_ending_here = max_ending_here + a[i];
        //cout << max_ending_here << "   whatthew fuck " << max_so_far << endl;
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
        //cout << max_so_far << " maaax \n";
    }
    return max_so_far;
}
int main()
{
    FASTIO;
    TEST(test)
    {
        ll max_so_far = 0;
        ll n;
        cin >> n;
        ll arr[n], a[n / 2 + 5], b[n / 2 + 5];
        ll sum = 0;
        REP(i, 0, n)
        {
            cin >> arr[i];
            if (i % 2 == 0)
                sum += arr[i];
        }
        ll sze1 = 0, sze2 = 0;
        ll j = 0;
        REP(i, 1, n)
        {
            a[j++] = arr[i] - arr[i - 1];
            i++;
        }
        ll k = 0;
        REP(i, 1, n - 1)
        {
            b[k++] = arr[i] - arr[i + 1];
            i++;
        }
        ll a_max = maxSubArraySum(a, j, max_so_far);
        ll b_max = maxSubArraySum(b, k, max_so_far);
        ll toAdd = max(a_max, b_max);
        cout << max(sum, sum + toAdd) << endl;
    }
}