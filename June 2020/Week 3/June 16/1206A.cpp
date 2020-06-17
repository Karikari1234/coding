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
    int a;
    cin >> a;
    set<ll> s;
    int arr[a], i;
    REP(i, 0, a)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }
    int b;
    cin >> b;
    int barra[b], j;
    REP(i, 0, b)
    {
        cin >> barra[i];
        s.insert(barra[i]);
    }
    REP(i, 0, a)
    {
        REP(j, 0, b)
        {
            //cout << arr[i] + barra[j] << endl;
            if (s.find(arr[i] + barra[j]) == s.end())
            {
                cout << arr[i] << " " << barra[j] << endl;
                return 0;
            }
            else
            {
                //cout << "found\n";
            }
        }
    }
}