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

ll maxSubArraySum(vector<ll> a, int begin, int end)
{
    ll max_so_far = a[begin];
    ll curr_max = a[begin];

    for (int i = 1; i < end; i++)
    {
        curr_max = max(a[i], curr_max + a[i]);
        max_so_far = max(max_so_far, curr_max);
        //cout << max_so_far << " " << i << endl;
    }
    return max_so_far;
}

int main()
{
    FASTIO;
    TEST(test)
    {
        ll n, sum = 0, bigsum = 0, neg = 0,f=0;
        cin >> n;
        vector<ll> v(n);
        int i;
        REP(i, 0, n)
        {
            cin >> v[i];
            sum += v[i];
            if (v[i] >= 0)
            {
                //bigsum += v[i];
            }
            else
            {
                neg = 1;
            }
            if (sum <= 0)
            {
                f = 1;
                //cout << "NO\n";
                //continue;
            }
        }
        if (neg == 0)
        {
            //cout << "YES\n";
            //break;
        }
        else
        {
            sum = 0;
            REP(i, 0, n)
            {
                sum += v[n - i - 1];
                if (sum <= 0)
                {
                    f= 1;
                    //cout << "NO\n";
                    //continue;
                }
            }
        }
        if(!f)YES;
        else NO;
    }
}