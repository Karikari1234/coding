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

ll arr[101][101];
int main()
{
    //cout << "ELEO";
    FASTIO;
    TEST(test) {
        ll r, c;
        cin >> r >> c;
        REP(i, 0, r+1) {
            REP(j, 0, c+1) {
                arr[i][j]=0;
            }
        }
        arr[r-1][c-1]= 1;
        string s[r];
        REP(i, 0, r) {
            cin >> s[i];
        }
        ll n=1, ans=0;
        ll a=0, b=0;
        ll f=0;
        ll cnt =00;
        REP(i, 0, r) {
            if (n==r*c)goto breaka;
            REP(j, 0, c) {
                a=i, b=j;
                if (arr[a][b]!=1) {
                    cout << "DHUKSE IN IF\n";
                    cout << (a!=r-1&&b!=c-1) << endl;
                    cout << (n!=r*c) << endl;
                    cout << (cnt<100) << endl;
                    cout << ((a!=r-1&&b!=c-1)&&(n!=r*c)&&(cnt<100)) << endl;
                    while ((a!=r-1&&b!=c-1)&&(n!=r*c)&&(cnt<100)) {
                        cnt++;
                        cout << "DHUKSE IN WHILE\n";
                        if (arr[a][b]!=1) {
                            arr[a][b]=1;
                            n++;
                        }
                        if (s[a][b]=='R') {
                            if (b+1==c) {
                                s[a][b]='D';
                                //n++;
                                a++;
                                if (arr[a][b]!=1) {
                                    arr[a][b]=1;
                                    n++;
                                }
                                ans++;
                                cout << "Ans updated at " << i << " " << j << "th pos.\n";
                            }
                            else {
                                b++;
                                if (arr[a][b]!=1) {
                                    arr[a][b]=1;
                                    n++;
                                }
                            }
                        }
                        else if (s[a][b]=='D') {
                            if (a+1==r) {
                                s[a][b]='R';
                                b++;
                                if (arr[a][b]!=1) {
                                    arr[a][b]=1;
                                    n++;
                                }
                                ans++;
                                cout << "Ans updated at " << i << " " << j << "th pos.\n";
                            }
                            else {
                                a++;
                                if (arr[a][b]!=1) {
                                    arr[a][b]=1;
                                    n++;
                                }
                            }
                        }
                        else {
                            //n++;
                        }
                        if (n==r*c)goto breaka;
                    }
                }
            }

        }
        breaka:
        REP(i, 0, r) {
            cout <<  s[i] << endl;
        }
        cout << ans << endl;
    }
}