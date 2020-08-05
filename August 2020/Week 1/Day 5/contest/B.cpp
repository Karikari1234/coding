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
    TEST(test) {
        unsigned long long int n, tot=0;
        cin >> n;
        vector<unsigned long long int> a;
        vector<unsigned long long int> b;
        REP(i, 0, n) {
            ll x;
            cin >> x;
            a.push_back(x);
        }
        REP(i, 0, n) {
            ll x;
            cin >> x;
            b.push_back(x);
        }
        auto one = *min_element(a.begin(), a.end());
        auto two = *min_element(b.begin(), b.end());
        auto it1=a.begin();
        auto it2=b.begin();
        for (it1;it1!=a.end();) {
            tot+=max((*it1-one), (*it2-two));
            it1++;
            it2++;
        }
        cout << tot <<  endl;
    }
}