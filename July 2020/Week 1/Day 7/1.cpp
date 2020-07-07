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
unordered_map<ll, ll> ump;

void fun()
{
    ump[3] = 3;
    for (i = 3; i * i < 1000000005; i += 2)
    {
        for (j = i; j <= 100000005; j += i)
        {
            ump[j] = i;
        }
    }
}
ll N = 50000;
bool check_prime(ll n)
{
    for (int i = 2; i < min(N, n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    FASTIO;
    //fun();
    TEST(test)
    {
        unordered_map<ll, ll>::iterator it;
        ll n;
        cin >> n;
        ll turn = 0; //ashu, if odd fastest.
        if(n==2){
           cout << "Ashishgup\n";
        }
        else if (n % 2 == 0 && (n & (n - 1)) == 0 && n != 2)
        {
            cout << "FastestFinger\n";
        }
        else if (n % 2 == 1 && n != 1)
            cout << "Ashishgup\n";
        else if (n == 1)
            cout << "FastestFinger\n";
        else
        {
            if (n % 4 != 0 && check_prime(n / 2))
            {
                cout << "FastestFinger\n";
            }
            else
            {
                cout << "Ashishgup\n";
            }
        }
    }
}