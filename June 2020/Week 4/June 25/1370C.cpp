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
int arr[105];
void minsieve()
{
    //cout << "start\n";
    for (i = 3; i * i <= 100; i += 2)
    {
        ll p = i;
        //cout << "inside\n";
        for (j = p; j <= 100; j += p)
        {
            if (arr[j] == 0)
                arr[j] = 1;
            //cout << j << endl;
            //cout << "deep inside\n";
        }
    }
    //cout << "done\n";
}
int main()
{
    FASTIO;
    minsieve();
    TEST(test)
    {
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << "FastestFinger\n";
        }
        else if (n % 2 != 0)
        {
            cout << "Ashishgup\n";
        }
        else if (arr[n] == 0)
        {
            cout << "FastestFinger\n";
        }
        else
        {
            ll t = 0;
            while (arr[n] != 0)
            {
                for (i = 3; i * i < n; i += 2)
                {
                    if (n % i == 0)
                    {
                        if ((n / i) % 2 == 0)
                        {
                            n /= i;
                            t++;
                            break;
                        }
                        else
                        {
                            n = i;
                            t++;
                            break;
                        }
                    }
                }
            }
            cout << t << endl;
            cout << "hoise\n";
        }
    }
}