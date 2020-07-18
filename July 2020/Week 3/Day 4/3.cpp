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
        ll n, bare = 0, val = 0, swtch = -1, peak = 0, finddd = -100;
        cin >> n;
        ll arr[n];
        vi v;
        vi_iterator it;
        REP(i, 0, n)
        {
            cin >> arr[i];
            //if (find(v.begin(), v.end(), arr[i]) == v.end())
            //{
            v.push_back(arr[i]);
            //}
        }
        for (j = v.size() - 1; j >= 0; j--)
        {
            //cout << v[j] << " hello ";
            if (j + 1 < v.size() && j - 1 >= 0)
            {
                if (v[j] > v[j + 1] && v[j] > v[j - 1])
                {
                    peak++;
                }
                //cout << v[j - 1] << " " << v[j] << " " << v[j + 1];
            }
            if (peak == 2)
            {
                finddd = v[j];
                //cout << "peeeakk\n";
            }
        }
        //cout << endl;
        if (finddd != -100)
        {
            REP(i, 0, n)
            {
                if (finddd == arr[i])
                {
                    val = i + 1;
                }
            }
        }

        if (peak >= 1)
        {
            val = 0;
        }
        cout << val << endl;
    }
}