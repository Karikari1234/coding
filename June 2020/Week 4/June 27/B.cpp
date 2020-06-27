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
    ll n,b=0,w=0;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> v;
    vector<ll>::iterator it;
    REP(i,0,s.size()){
        if(s[i] == 'B')b++;
        else w++;
    }
    if(b==0 || w==0){
        cout << 0 << endl;
    }
    else{
    if(b%2 == 1 && w%2 == 1){
        cout << -1 << endl;
    }else{
        ll cnt=0;
        ll x = 0;
        if(w%2==0){
            REP(i,0,s.size()){
                if(s[i] == 'W'){cnt+=(i-x);
                for(int q = i;q>x;q--){
                    v.push_back(q);
                }
                x++;
                }

            }
            cnt+=(w/2);

            REP(i,0,w){
                v.push_back(i+1);
                i++;
            }
             cout << v.size() << endl;
             REP_ITER(it,v){
                 cout << *it << " ";
            }
            cout << endl;
        }
        else if(b%2 == 0){
            REP(i,0,s.size()){
                if(s[i] == 'B'){cnt+=(i-x);
                for(int q = i;q>x;q--){
                    v.push_back(q);
                }
                x++;;
                }
            }
            cnt+=(b/2);
            REP(i,0,b){
                v.push_back(i+1);
                i++;
            }

            cout << v.size() << endl;
             REP_ITER(it,v){
                 cout << *it << " ";
            }
            cout << endl;
        }
    }
    }
}

