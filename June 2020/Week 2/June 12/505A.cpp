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
    string diff1, giff1, diff2, giff2, giff, diff;
    int i, cnt1 = 0, o = 0, z = s.size() - 1, pos1, ini_pos1, cnt2 = 0, pos2, ini_pos2, cnt = 0, pos, ini_pos;
    bool flag = 0;
    REP(i, 0, s.size() / 2)
    {
        o = i;
        //cout << o << " " << z << endl;
        if (s[o] == s[z])
        {
            z--;
        }
        else
        {
            flag = 1;
            cnt1++;
            if (cnt1 == 1)
            {
                pos1 = z;
                diff1.insert(diff1.begin(), s[o]);
                giff1.insert(giff1.begin(), s[z]);
                ini_pos1 = o;
            }
        }
    }
    o = 0, z = s.size() - 1;
    REP(i, 0, s.size() / 2)
    {
        z = s.size() / 2 - i - 1;
        //cout << o << " " << z << endl;
        if (s[o] == s[z])
        {
            o++;
        }
        else
        {
            flag = 1;
            cnt2++;
            if (cnt2 == 1)
            {
                pos2 = z;
                diff2.insert(diff2.begin(), s[o]);
                giff2.insert(giff2.begin(), s[z]);
                ini_pos2 = o;
            }
        }
    }
    cout << cnt1 << cnt2 << endl;
    cnt = min(cnt1, cnt2);
    cout << cnt << endl;
    if (cnt == cnt1)
    {
        diff = diff1;
        pos = pos1;
        ini_pos = ini_pos1;
        giff = giff1;
    }
    else
    {
        diff = diff2;
        pos = pos2;
        ini_pos = ini_pos2;
        giff = giff2;
    }
    if (!flag)
    {
        if (s.size() % 2 == 0)
        {
            REP(i, 0, s.size() / 2)
            {
                cout << s[i];
            }
            cout << 'y';
            REP(i, s.size() / 2, s.size())
            {
                cout << s[i];
            }
            return 0;
        }
        else
        {
            REP(i, 0, s.size() / 2)
            {
                cout << s[i];
            }
            cout << s[s.size() / 2];
            REP(i, s.size() / 2, s.size())
            {
                cout << s[i];
            }
            return 0;
        }
    }
    else
    {
        //cout << cnt << endl;
        if (cnt > 1)
        {
            cout << "NA\n";
        }
        else
        {
            int f = 0, g = 0;
            string s1 = s;
            string s2 = s;
            s1.insert(pos + 1, diff);
            s2.insert(ini_pos, giff);
            //cout << s << endl;
            //cout << pos << "pos \n";
            cout << s1 << " " << s2 << endl;
            REP(i, 0, s1.size() / 2)
            {
                if (s1[i] == s1[s1.size() - i - 1])
                {
                }
                else
                {
                    f = 1;
                }
            }
            REP(i, 0, s2.size() / 2)
            {
                if (s2[i] == s2[s2.size() - i - 1])
                {
                }
                else
                {
                    g = 1;
                    //cout << s2[i] << s2[s2.size() - i - 1];
                }
            }
            if (!f)
            {
                cout << s1 << endl;
            }
            else if (!g)
            {
                cout << s2 << endl;
            }
            else
            {
                cout << "NA\n";
            }
        }
    }
}