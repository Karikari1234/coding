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
    int n;
    cin >> n;
    vi v;
    int i;
    REP(i, 0, n)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int ser = 0, dim = 0;
    int start = 0, end = n - 1;
    int round = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (v[start] > v[end])
        {
            if (round % 2)
            {
                dim += v[start];
            }
            else
            {
                ser += v[start];
            }
            round++;
            start++;
        }
        else
        {
            if (round % 2)
            {
                dim += v[end];
            }
            else
            {
                ser += v[end];
            }
            round++;
            end--;
        }
        //cout << start << " " << endl;
    }
    cout << ser << " " << dim << endl;
}