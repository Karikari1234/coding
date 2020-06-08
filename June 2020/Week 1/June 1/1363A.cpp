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
        int n, x;
        cin >> n >> x;
        int arr[n], o = 0, e = 0;
        for (size_t i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2)
            {
                o++;
            }
            else
            {
                e++;
            }
        }
        if (o >= 1 && !(o == n && x % 2 == 0) && !(x == n && o % 2 == 0))
        {
            YES;
        }
        else
        {
            NO;
        }
    }
}