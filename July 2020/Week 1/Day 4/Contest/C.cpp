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
        ll n, flag = 0;
        cin >> n;
        ll arr[n];
        REP(i, 0, n)
        {
            cin >> arr[i];
        }
        vector<ll> v;
        vector<ll>::iterator it;
        ll mini = arr[0];
        v.push_back(mini);
        ll first = 1;
        REP(i, 0, n - 1)
        {
            if (!first && arr[i] > arr[i + 1])
            {
                v.push_back(arr[i]);
            }
            if (first && arr[i] > arr[i + 1])
            {
                first = 0;
            }
        }
        v.push_back(arr[n - 1]);
        it = v.begin();
        ll min = *it;
        REP_ITER(it, v)
        {
            //cout << *it << " ";
            if (*it < min)
            {
                flag = 1;
            }
            else
            {
                min = *it;
            }
        }
        //cout << endl
          //   << endl;
        if (!flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}