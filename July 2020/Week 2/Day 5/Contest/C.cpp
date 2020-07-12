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
        unsigned long long int n, x;
        cin >> n >> x;
        unsigned long long int arr[n];
        REP(i, 0, n)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        i = n - 1, j = n - 1;
        unsigned long long int teams = 0;
        while (i >= 0 && j >= 0)
        {

            if ((j - i + 1) * arr[i] < x)
                i--;
            else
            {

                i--;
                j = i;
                teams++;
            }
        }
        cout << teams << endl;
    }
}