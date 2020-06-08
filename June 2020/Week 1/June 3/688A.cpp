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
    int n, k;
    cin >> n >> k;
    string s[k];
    for (int i = 0; i < k; i++)
    {
        cin >> s[i];
    }
    //cout << endl;
    int max_sum = 0, curr_sum = 0;
    for (int i = 0; i < k; i++)
    {
        int one = 0, zero = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
            //cout << s[i][j];
        }
        if (one != n)
        {
            curr_sum++;
        }
        else
        {
            curr_sum = 0;
        }
        max_sum = max(curr_sum, max_sum);
        //cout << endl;
    }
    cout << max_sum << endl;
}