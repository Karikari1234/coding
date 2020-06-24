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
vector<bool> prime(1e4 + 1);

void sieve()
{
    prime[2] = true;
    prime[1] = prime[0] = false;
    for (int i = 3; i <= 1e4; i += 2)
    {
        prime[i] = true;
    }
    for (int i = 3; i <= 1e4; i += 2)
    {
        if (prime[i] == 1)
        {
            for (int j = i * i; j <= 1e4; j += i)
            {
                prime[j] = false;
            }
        }
    }
}
int main()
{
    FASTIO;
    sieve();
    ll n;
    cin >> n;
    REP(i, 0, n + 1)
    {
        if (prime[i])
        {
            cout << i << endl;
        }
    }
}