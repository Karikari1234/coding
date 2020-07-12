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
ll arr[3];
int main()
{
    FASTIO;
    TEST(test)
    {
        ll pp = 0, rr = 0, ss = 0;
        string s;
        cin >> s;
        REP(i, 0, s.size())
        {
            if (s[i] == 'P')
                pp++,arr[0]++;
            if (s[i] == 'R')
                rr++,arr[1]++;
            if (s[i] == 'S')
                ss++,arr[2]++;
        }
        ll maxi = max(pp,max(rr,ss));
        if(maxi==pp){
            REP(i,0,s.size()){
                cout << 'S';
            }
        }
        else if(maxi==rr){
            REP(i,0,s.size()){
                cout << 'P';
            }
        }
        else{
            REP(i,0,s.size()){
                cout << 'R';
            }
        }
        cout << endl;
    }
}