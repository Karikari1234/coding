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
    int n;
    cin >> n;
    int i, arr[n + 1];
    arr[0] = 0;
    REP(i, 1, n + 1)
    {
        cin >> arr[i];
    }
    vi v;
    vi_iterator it;
    REP(i, 1, n + 1)
    {
        int k = i;
        int s;
        int flag = 0;
        for (int j = 0; j + k <= n - 1; j++)
        {
            if (arr[j + 1] - arr[j] == arr[j + k + 1] - arr[j + k])
            {
            }
            else
            {
                flag = 1;
            }
        }
        if (!flag)
            v.push_back(i);
    }
    cout << v.size() << endl;
    REP_ITER(it, v)
    {
        cout << *it << " ";
    }
}