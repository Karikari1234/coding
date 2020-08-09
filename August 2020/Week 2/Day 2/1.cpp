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
ll arr[100005];
int main()
{
    FASTIO;
    ll n, four=0, six=0, eight=0, two=0;
    cin >> n;
    REP(i, 0, n) {
        ll x;
        cin >> x;
        arr[x]++;
        if (arr[x]==4) {
            two--;
            two=max((ll)0, two);
            four++;
        }
        if (arr[x]==8) {
            six--;
            six=max((ll)0, six);
            eight++;
        }
        if (arr[x]==2) {
            two++;
        }
        if (arr[x]==6) {
            four--;
            four=max((ll)0, four);
            six++;
        }
        //cout << two << " " << four << " " << six << " " << eight << endl;
    }
    ll q;
    cin >> q;
    REP(i, 0, q) {
        string s;
        ll x;
        cin >> s >> x;
        if (s=="+") {
            arr[x]++;
            if (arr[x]==4) {
                two--;
                two=max((ll)0, two);
                four++;
            }
            if (arr[x]==8) {
                six--;
                six=max((ll)0, six);
                eight++;
            }
            if (arr[x]==2) {
                two++;
            }
            if (arr[x]==6) {
                four--;
                four=max((ll)0, four);
                six++;
            }
        }
        else {
            arr[x]--;
            if (arr[x]==3) {
                four--;
                four=max((ll)0, four);
                two++;
            }
            if (arr[x]==7) {
                eight--;
                eight=max((ll)0, eight);
                six++;
            }
            if (arr[x]==1) {
                two--;
                two=max((ll)0, two);
            }
            if (arr[x]==5) {
                six--;
                six=max((ll)0, six);
                four++;
            }
        }
        //cout << two << " " << four << " " << six << " " << eight << endl;
        if (eight>=1) {
            YES;
        }
        else if (six>=1&&two>=1) {
            YES;
        }
        else if (four>=2) {
            YES;
        }
        else if (four >=1 && two>=2) {
            YES;
        }
        else {
            NO;
        }
    }
}