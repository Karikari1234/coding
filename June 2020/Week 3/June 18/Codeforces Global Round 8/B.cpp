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

int i, j, loop;

ll calculateSum(ll n)
{
    //ll x = pow(2, n + 1) - 1;
    //delete *x;
    return pow(2, n + 1) - 1;
}

ll bara;

int main()
{
    FASTIO;
    unsigned long long int k;
    cin >> k;
    cout << "codeforce";
    //printf("%s", "codeforce");
    i = 0;
    ll req = k;
    while (k != 0)
    {
        i = 0;
        string s = "s";
        while (calculateSum(i) <= k && i < 1976)
        {

            cout << s;
            // if (s.size() <= 1e9)
            //if (s.size() <= 1e9 - 10000)
            s += s;
            //else
            //  break;
            // else
            // {
            //     break;
            // }
            //remaining = k - calculateSum(i);
            bara = calculateSum(i);
            i++;
            //loop++;
            //cout << loop << endl;
        }
        s.clear();
        //o += bara;
        k -= bara;
    }
    //cout << o << endl;
    //cout << endl;
}