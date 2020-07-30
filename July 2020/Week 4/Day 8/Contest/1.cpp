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
        string s;
        cin >> s;
        map<char, vector<ll>> mp;
        REP(i, 0, s.size())
        {
            mp[s[i]].push_back(i);
        }
        ll min_size = 2;
        auto it = mp.begin();
        for (it; it != mp.end(); it++)
        {
            min_size = max((ll)it->second.size(), min_size);
        }
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                ll f = 0, t = 0;
                if (i != j)
                {
                    //cout << " for i and j = " << i << " " << j << endl;
                    for (int k = 0; k < s.size(); k++)
                    {
                        if (!f && s[k] == '0' + i)
                        {
                            // cout << s[k] << " ";
                            f = 1;
                            t++;
                        }
                        if (f && s[k] == '0' + j)
                        {
                            //c//out << s[k] << " " << endl;
                            f = 0;
                            t++;
                        }
                    }
                    if (t % 2 == 1)
                        t--;
                    min_size = max(min_size, t);
                }
            }
        }
        cout << s.size() - min_size << endl;
    }
}