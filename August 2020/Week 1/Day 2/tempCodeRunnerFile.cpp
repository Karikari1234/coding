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
ll N;
// ll fA(ll *arr[N], ll n)
// {
//     ll max_r = INT_MIN;
//     ll min_r = INT_MAX;
//     ll max_c = INT_MIN;
//     ll min_c = INT_MAX;
//     REP(i, 0, n)
//     {
//         ll row_sum = 0, col_sum = 0;
//         REP(j, 0, n)
//         {
//             row_sum += arr[i][j];
//             col_sum += arr[j][i];
//         }
//         max_r = max(row_sum, max_r);
//         min_r = min(row_sum, min_r);
//         max_c = max(max_c, col_sum);
//         min_c = min(min_c, col_sum);
//     }
//     //REP()
// }
int main()
{
    FASTIO;
    TEST(test)
    {
        ll n, k;
        cin >> n >> k;
        //N = n;

        ll arr[n][n];
        REP(i, 0, n)
        {
            REP(j, 0, n)
            {
                arr[i][j] = 0;
            }
        }
        ll cnt = k;
        ll r = 0, c = 0, x = 1, y = n - 1;
        for (int i = 0; i < n; i++)
        {

            if (cnt)
            {
                //cout << "Diagonal i and i " << i << " " << i << endl;
                arr[i][i] = 1;
                cnt--;
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < y; j++)
            {

                if (cnt)
                {
                    //cout << " j and j+x = " << j << " " << j + x << endl;
                    arr[j][j + x] = 1;
                    cnt--;
                }
            }
            x++;
            y--;
        }
        x = 1, y = n - 1;
        for (int i = 0; i < n - 1; i++)
        {

            for (int j = 0; j < y; j++)
            {

                if (cnt)
                {
                    //cout << "niche j+x and j = " << j + x << " " << j << endl;
                    arr[j + x][j] = 1;
                    cnt--;
                }
            }
            x++;
            y--;
        }
        ll max_r = INT_MIN;
        ll min_r = INT_MAX;
        ll max_c = INT_MIN;
        ll min_c = INT_MAX;
        REP(i, 0, n)
        {
            ll row_sum = 0, col_sum = 0;
            REP(j, 0, n)
            {
                row_sum += arr[i][j];
                col_sum += arr[j][i];
            }
            max_r = max(row_sum, max_r);
            min_r = min(row_sum, min_r);
            max_c = max(max_c, col_sum);
            min_c = min(min_c, col_sum);
        }
        ll ans = ((max_r - min_r) * (max_r - min_r)) + ((max_c - min_c) * (max_c - min_c));
        cout << ans << endl;
        REP(i, 0, n)
        {
            REP(j, 0, n)
            {
                cout << arr[i][j];
            }
            cout << endl;
        }
    }
}