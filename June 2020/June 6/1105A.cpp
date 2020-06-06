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

int main()
{
    FASTIO;
    int n;
    cin >> n;

    int arr[n];
    int i, mini = INT_MAX, maxi = INT_MIN;
    REP(i, 0, n)
    {
        cin >> arr[i];
        mini = min(arr[i], mini);
        maxi = max(arr[i], maxi);
    }
    //cout << mini << "   " << maxi << endl;
    int min_cost = INT_MAX;
    map<int, int> mp;
    map<int, int>::iterator it;
    it = mp.begin();
    int j;
    vector<pair<int, int>> v;
    REP(i, 1, maxi + 2)
    {
        //cout << i << endl;
        ll curr = i, kom = i - 1, beshi = i + 1;
        int cost = 0;
        REP(j, 0, n)
        {
            cost += min(min(abs(arr[j] - curr), abs(arr[j] - beshi)), abs(arr[j] - kom));
        }
        //cout << "costtt " << cost << " and  " << i << endl;
        mp[cost] = i;
        v.push_back(make_pair(cost, i));
        //cout << cost << endl;
        min_cost = min(min_cost, cost);
        //cout << min_cost << endl;
    }
    sort(v.begin(), v.end());
    //c/out << min_cost << endl;
    //cout << mp.size() << endl;
    //cout << it->second << " " << it->first << endl;
    cout << v[0].second << " " << v[0].first << endl;
}