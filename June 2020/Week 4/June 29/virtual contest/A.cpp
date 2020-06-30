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
        ll f = 0;
        char abc[s.size()] = {'?'};
        if (s.size() == 1)
        {
            if (s[0] != '?')
            {
                cout << s << endl;
            }
            else
            {
                cout << 'a' << endl;
            }
            continue;
        }
        REP(i, 0, s.size() - 1)
        {
            if (s[i] == s[i + 1] && s[i] != '?')
                f = 1;
        }
        REP(i, 0, s.size())
        {
            abc[i] = s[i];
        }

        REP(i, 0, s.size())
        {
            if (s[i] == '?' && i == 0)
            {
                if (i + 1 <= s.size() - 1)
                {
                    char ds = abc[i + 1];
                    if (ds == 'a')
                    {
                        abc[i] = 'b';
                    }
                    if (ds == 'b')
                    {
                        abc[i] = 'c';
                    }
                    if (ds == 'c')
                    {
                        abc[i] = 'a';
                    }
                    if (ds == '?')
                    {
                        abc[i] = 'a';
                    }
                }
            }
            if (s[i] == '?' && i == s.size() - 1)
            {
                if (i - 1 >= 0)
                {
                    char ds = abc[i - 1];
                    if (ds == 'a')
                    {
                        abc[i] = 'b';
                    }
                    if (ds == 'b')
                    {
                        abc[i] = 'c';
                    }
                    if (ds == 'c')
                    {
                        abc[i] = 'a';
                    }
                    if (ds == '?')
                    {
                        abc[i] = 'a';
                    }
                }
            }
            if (s[i] == '?' && i != 0 && i != s.size() - 1)
            {
                char bef = abc[i - 1];
                char aft = abc[i + 1];
                if (bef == 'a' && aft == 'b')
                {
                    abc[i] = 'c';
                }
                if (bef == '?' && aft == '?')
                {
                    abc[i] = 'a';
                }
                if (bef == 'b' && aft == 'a')
                {
                    abc[i] = 'c';
                }
                if (bef == 'a' && aft == 'c')
                {
                    abc[i] = 'b';
                }
                if (bef == 'c' && aft == 'a')
                {
                    abc[i] = 'b';
                }
                if (bef == 'a' && aft == '?')
                {
                    abc[i] = 'b';
                }
                if (bef == 'a' && aft == 'a')
                {
                    abc[i] = 'b';
                }
                if (bef == 'b' && aft == 'b')
                {
                    abc[i] = 'a';
                }
                if (bef == 'c' && aft == 'c')
                {
                    abc[i] = 'a';
                }
                if (bef == 'b' && aft == '?')
                {

                    abc[i] = 'a';
                }
                if (bef == 'c' && aft == '?')
                {
                    abc[i] = 'a';
                }
                if (bef == '?' && aft == 'a')
                {
                    abc[i] = 'b';
                }
                if (bef == '?' && aft == 'b')
                {
                    abc[i] = 'a';
                }
                if (bef == '?' && aft == 'c')
                {
                    abc[i] = 'a';
                }
                if (bef == 'b' && aft == 'c')
                {
                    abc[i] = 'a';
                }
                if (bef == 'c' && aft == 'b')
                {
                    abc[i] = 'a';
                }
            }
            if (s[i] != '?')
            {
                abc[i] = s[i];
            }
        }
        if (f)
        {
            cout << -1 << endl;
        }
        else
        {
            REP(i, 0, s.size())
            {
                cout << abc[i];
            }
            cout << endl;
        }
    }
}