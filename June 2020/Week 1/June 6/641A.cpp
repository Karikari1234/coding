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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int i, arr[n];
    REP(i, 0, n)
    {
        cin >> arr[i];
    }
    ll curr_pos = 0, flag = 0;
    REP(i, 0, n)
    {
        if (s[curr_pos] == '>')
        {
            curr_pos = curr_pos + arr[curr_pos];
        }
        else
        {
            curr_pos -= arr[curr_pos];
        }
        if (curr_pos < 0 || curr_pos >= n)
        {
            flag = 1;
            break;
        }
        //cout << "Curr pos = " << curr_pos << endl;
    }
    if (!flag)
    {
        cout << "INFINITE\n";
    }
    else
    {
        cout << "FINITE\n";
    }
}