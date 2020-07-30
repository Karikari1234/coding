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
        if (n < 31)
        {
            cout << "NO\n";
        }
        else
        {
            YES;
            if (n - 30 != 6 && n - 30 != 10 && n - 30 != 14)
                cout << 6 << " " << 10 << " " << 14 << " " << n - 30 << endl;
            else
            {
                // NO;
                if(n-30==6){
                    cout << 6 << " " << 10 << " " << 15 << " " << 5 << endl;
                }
                else if(n-30==10){
                    cout << 6 << " " << 10 << " " << 15 << " " << 9 << endl;
                }
                else if(n-30==14){
                    cout << 6 << " " << 10 <<  " " << 15 << " " << 13 << endl;
                }
                else{

                }
            }
        }
    }
}