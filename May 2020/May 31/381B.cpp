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
    int n;
    cin >> n;
    int arr[n];
    int i;
    map<int, int, greater<int>> mp;
    map<int, int>::iterator it;
    deque<int> dq;
    deque<int>::iterator it2;
    REP(i, 0, n)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    it = mp.begin();
    dq.push_back(it->first);
    it++;
    for (it; it != mp.end(); it++)
    {
        if (it->second > 1)
        {
            dq.push_back(it->first);
            dq.push_front(it->first);
        }
        else
        {
            dq.push_back(it->first);
        }
    }
    cout << dq.size() << endl;
    for (it2 = dq.begin(); it2 != dq.end(); it2++)
    {
        cout << *it2 << " ";
    }
    cout << endl;
    //sort(arr,arr+n,greater<int>());
}