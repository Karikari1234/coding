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
string q[100];
int main()
{
    FASTIO;
    set<string> s;
    ll n, m;
    cin >> n >> m;
    int i;
    REP(i, 0, n)
    {

        cin >> q[i];
        s.insert(q[i]);
    }
    vector<string> left, right;
    string mid;
    REP(i, 0, n)
    {
        string t = q[i];
        reverse(t.begin(), t.end());
        if (t == q[i])
            mid = t;
        else if (s.find(t) != s.end())
        {
            left.push_back(q[i]);
            right.push_back(t);
            s.erase(q[i]);
            s.erase(t);
        }
    }
    cout << left.size() * m * 2 + mid.size() << endl;
    for (string x : left)
        cout << x;
    cout << mid;
    reverse(right.begin(), right.end());
    for (string x : right)
        cout << x;
    cout << endl;
}