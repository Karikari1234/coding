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
    TEST(test)
    {
        int o = 0, z = 0, ans = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] - '0')
                o++;
            else
                z++;
        }
        // 000,111,100,001,110,011
        if (s.size() < 3)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            if (z == s.size() || o == s.size())
            {
                cout << 0 << endl;
                continue;
            }
            int all_zeros = o;           //000 done
            int all_ones = z;            //111 done
            int first = s[0] - '0';      //first
            int sze = s.size();          //size
            int last = s[sze - 1] - '0'; //last;
            int ozz, zzo, ooz, zoo;      //100,001,110,011
            //for 100 - if 1 is present,taile baki shob 1 re 0 banaye dao.
            if (first == 1)
            {
                ozz = o - 1; // ekta 1 rakh, baki shob 0.
            }
            else
            {
                ozz = o + 1; // dhor 0 ase, taile 01110 ase, etare 10000 ,banate hoole ,joto one , make them 0 ,ar first er zero re 1 kor.
            }
            //for 001
            if (last == 1)
            {
                zzo = o - 1; //last e 1, tarmane shob one re 0te flip mar.ekta raikha.
            }
            else
            {
                zzo = o + 1; //dhorlam 01110, etare korte hoole shob 1 re zero bana , ar last er zero re 1 bana.
            }
            //for 110
            if (last == 0)
            {
                ooz = z - 1; //last e zero ase, tarmane ager shob zero-1 re 1 e flip kor.
            }
            else
            {
                ooz = z + 1; //last e 1 ase,dhorlam 10101,etare 11110 kora lagbe,taile z+1
            }
            //for 011
            if (first == 0)
            {
                zoo = z - 1; //first e zero ,taile make all zeros into one except the first one
            }
            else
            {
                zoo = z + 1; //first e 1 ase, dhorlam , i have 10110101, etare 01111111..bujhi
            }
            cout << min(min(min(min(min(all_zeros, all_ones), ooz), zzo), zoo), ozz) << endl;
        }
    }
}