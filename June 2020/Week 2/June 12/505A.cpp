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
    string s;
    cin >> s;
    string original = s;
    reverse(s.begin(), s.end());
    if (original == s)
    {
        int ind = s.size() / 2;
        //cout << ind - 1 << endl;
        string q = " ";
        q[0] = s[ind];
        //cout << q << endl;
        s.insert(ind, q);
        cout << s << endl;
        return 0;
    }
    else
    {
        for (char c = 'a'; c <= 'z'; c++)
        {
            for (int i = 0; i <= s.size(); i++)
            {
                string a = original;
                string q = original;
                string b = " ";
                b[0] = c;
                a.insert(i, b);
                q = a;
                //cout << "a " << a << "  original " << q << endl;
                reverse(q.begin(), q.end());
                if (a == q)
                {
                    cout << a << endl;
                    return 0;
                }
                //reverse(original.begin(), original.end());
            }
        }
    }
    cout << "NA\n";
}