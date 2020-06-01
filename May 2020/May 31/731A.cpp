#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define REP(i, a, b) for (i = a; i < b; i++)
#define REP_ITER(it, v) for (it = v.begin(); it != v.end(); it++)

#define FASTIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(0)

#define TEST(test) \
    cin >> test;   \
    while (test--)

#define cll(a, b) cin >> a >> b
#define YES cout << "YES\n"
#define NO cout << "NO\n"

#define vi vector<int>
#define vi_iterator vector<int>::iterator

#define si set<int>
#define si_iterator set<int>::iterator
int i, j, k, l;
int n, m;
int a, b;
int main()
{
    FASTIO;
    string s;
    cin >> s;
    int sum = 0;
    int cur_pos = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int wew = s[i] - 'a';
        //cout << abs(abs(wew - cur_pos) - 26) << " " << abs(cur_pos - wew) << "\n";
        sum += min(abs(abs(wew - cur_pos) - 26), abs(cur_pos - wew));
        cur_pos = wew;
    }
    cout << sum << endl;
}