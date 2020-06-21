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

// To compute x raised to power y under modulo m
ll power(ll x, unsigned int y, unsigned int m);

// Function to find modular inverse of a under modulo m
// Assumption: m is prime
void modInverse(ll a, ll m)
{
    if (__gcd(a, m) != 1)
        cout << "Inverse doesn't exist";

    else
    {

        // If a and m are relatively prime, then
        // modulo inverse is a^(m-2) mode m
        cout << "Modular multiplicative inverse is "
             << power(a, m - 2, m);
    }
}

// To compute x^y under modulo m
ll power(ll x, unsigned int y, unsigned int m)
{
    if (y == 0)
        return 1;
    ll p = power(x, y / 2, m) % m;
    p = (p * p) % m;

    return (y % 2 == 0) ? p : (x * p) % m;
}

int main()
{
    FASTIO;
    int a = 3, m = 11;
    modInverse(a, m);
}