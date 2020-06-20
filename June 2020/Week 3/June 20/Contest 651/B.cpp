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
        ll n;
        cin >> n;
        vector<ll> arr(2 * n);
        vector<ll> o(2 * n), e(2 * n);
        vector<ll>::iterator it;
        ll a, b;
        a = 0;
        b = 0;
        REP(i, 0, 2 * n)
        {

            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                e[a++] = i + 1;
            }
            else
            {
                o[b++] = i + 1;
            }
        }
        if (n == 2)
        {
            cout << "1 2" << endl;
            continue;
        }
        else
        {
            ll q = 0;
            for (int w = 0; w < b - 1; w += 2)
            {
                if (q < 2 * n - 2 && o[w] != 0)
                {
                    //cout << "ooodyy\n";
                    cout << o[w] << " " << o[w + 1] << endl;
                    q += 2;
                }
                else
                {
                    goto next;
                }
            }
        next:
            for (int w = 0; w < a - 1; w += 2)
            {
                if (q < 2 * n - 2 && e[w] != 0)
                {
                    //cout << "ebenny\n";
                    cout << e[w] << " " << e[w + 1] << endl;
                    q += 2;
                }
            }
        }
    }
}