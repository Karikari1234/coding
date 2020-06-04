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

int n;
vector<string> v;

string res;

bool check(string s)
{
    res.clear();
    multiset<string> vv, pref, suff;
    for (int i = 0; i < n - 1; i++)
    {
        pref.insert(s.substr(0, n - i - 1));
        vv.insert(s.substr(0, n - i - 1));
        suff.insert(s.substr(i + 1));
        vv.insert(s.substr(i + 1));
    }
    if (vv == multiset<string>(v.begin(), v.end()))
    {
        for (int i = 0; i < 2 * n - 2; i++)
        {
            if (pref.count(v[i]))
            {
                res += 'P';
                pref.erase(pref.find(v[i]));
            }
            else if (suff.count(v[i]))
            {
                res += 'S';
                suff.erase(suff.find(v[i]));
            }
            else
            {
                assert(false);
            }
        }
        return true;
    }
    return false;
}

int main()
{
    FASTIO;

    cin >> n;
    int m = 2 * n;
    m -= 2;
    //cout << m << endl;

    vector<string>::iterator it;
    vector<string> special;
    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
        if (v[i].size() == n - 1)
        {
            special.push_back(v[i]);
        }
    }
    string one = special[0] + special[1].substr(n - 2);
    string two = special[1] + special[0].substr(n - 2);
    if (check(one))
    {
        cout << res;
    }
    else if (check(two))
    {
        cout << res;
    }
}