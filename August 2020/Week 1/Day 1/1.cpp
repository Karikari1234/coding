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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string test = "abacaba";
        string newiw = s;
        // for (int i = 0; i < s.size(); i++)
        // {
        //     newiw[i] = s[i];
        // }
        ll num = 0;
        for (int i = 0; i <= s.size() - 7; i++)
        {
            ll cnt = 0;
            //num =0;
            for (int j = 0; j < 7; j++)
            {
                if (s[i] == test[j])
                {
                    cnt++;
                }
                //cout << "First comp " << s[i] << " " << test[j] << endl;
                i++;
            }
            i -= 7;
            if (cnt == 7)
                num++;
        }
        if (num > 1)
        {
            cout << "No\n";
        }
        else if (num == 1)
        {
            cout << "Yes\n";
            string newe = "";
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '?')
                {
                    s[i] = 'z';
                }
            }
            cout << s << endl;
        }
        else
        {
            ll done = 0, flag = 0;
            for (int i = 0; i <= s.size() - 7; i++)
            {
                ll cnt = 0;
                flag = 0;
                if (!done)
                {
                    for (int j = 0; j < 7; j++)
                    {
                        if (newiw[i] == test[j])
                        {
                            cnt++;
                        }
                        else if (newiw[i] == '?' && !done && !flag)
                        {
                            s[i] = test[j];
                            cnt++;
                        }
                        else if (newiw[i] == '?' && (done || flag))
                        {
                            //s[i] = 'z';
                        }
                        else if (newiw[i] != test[j])
                        {
                            flag = 1;
                        }
                        i++;
                    }
                    i -= 7;
                    if (cnt == 7)
                    {
                        num = 0;
                        for (int i = 0; i <= s.size() - 7; i++)
                        {
                            ll cnt = 0;
                            //num =0;
                            for (int j = 0; j < 7; j++)
                            {
                                if (newiw[i] == test[j])
                                {
                                    cnt++;
                                }

                                i++;
                            }
                            i -= 7;
                            if (cnt == 7)
                                num++;
                        }
                        if (num == 1)
                        {
                            done = 1;
                            for (int i = 0; i < s.size(); i++)
                            {
                                newiw[i] = s[i];
                            }
                        }
                        else
                        {
                        }
                    }
                    done = 1;
                }
                else
                {
                    for (int i = 0; i < s.size(); i++)
                    {
                        if (s[i] == '?')
                        {
                            s[i] = 'z';
                        }
                    }
                }
            }
            if (done)
            {
                num = 0;
                for (int i = 0; i <= newiw.size() - 7; i++)
                {
                    ll cnt = 0;

                    for (int j = 0; j < 7; j++)
                    {
                        if (newiw[i] == test[j])
                        {
                            cnt++;
                        }

                        i++;
                    }
                    i -= 7;
                    if (cnt == 7)
                        num++;
                }
                if (num == 1)
                {
                    cout << "Yes\n", cout << newiw << endl;
                }
                else
                {
                    cout << "No\n";
                }
            }
            else
            {
                cout << "No\n";
            }
        }
    }
}