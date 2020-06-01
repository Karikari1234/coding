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
        ll n, x, e = 0, o = 0;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                e++;
            else
                o++;
        }
        if (o >= x && x % 2 != 0)
            YES;
        else
        {
            if (o >= 2)
            {
                if (o % 2 == 0)
                    o--;
                if (e >= abs(x - o))
                    YES;
                else
                    NO;
            }
            else if (o == 1)
            {
                if (e >= x - 1)
                    YES;
            }
            else
            {
                NO;
            }
        }
    }
}