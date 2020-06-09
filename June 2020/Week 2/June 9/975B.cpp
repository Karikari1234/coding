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
    ll arr[14], maxi = INT_MIN, max_sum = INT_MIN;
    int i = 0, max_index;
    REP(i, 0, 14)
    {
        cin >> arr[i];
        if (arr[i] > maxi)
        {
            maxi = arr[i];
            max_index = i;
        }
    }
    if (maxi == 0)
        cout << 0 << endl;
    else
    {
        ll value;
        REP(i, 0, 14)
        {
            max_index = i;
            maxi = arr[max_index];
            arr[max_index] = 0;
            max_index++;
            if (maxi <= 150)
            {
                REP(i, 0, maxi)
                {
                    arr[(max_index + i) % 14]++;
                }
            }
            else
            {
                ll to_be_increased = maxi / 14;
                ll additionals = maxi % 14;
                ll last_stopped_index;
                REP(i, 0, 14)
                {
                    arr[(max_index + i) % 14] += to_be_increased;
                    last_stopped_index = (max_index + i) % 14;
                }
                //cout << last_stopped_index << " last index before increase\n";
                last_stopped_index++;
                REP(i, 0, additionals)
                {
                    arr[(i + last_stopped_index) % 14]++;
                }
            }
        }
        max_index--;
        ll sum = 0;
        REP(i, 0, 14)
        {
            if (arr[i] % 2 == 0)
                sum += arr[i];
            // cout << arr[i] << endl;
        }
        sum = max(sum, max_sum);
        arr[max_index] = maxi;
    }

    cout << max_sum << endl;
}