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

int *binary_search(int *arr, int size, int x)
{
    /*L = 0,R=N-1
      while L <= R:
            mid = L + (R-L)/2
            if(a[mid] == target)
                return mid
            if(a[mid] < target) /// 1,2,3,4,mid.....,target,........ ////
                L = mid +1
            else                /// 1,2,3,4,target,......,mid,........ ///
                R = mid -1
      return -1;
    */
    sort(arr, arr + size);
    int *p = new int[2];
    p[0] = 0;
    p[1] = x;
    int a = 0;
    int q = size - 1;
    while (a <= q)
    {
        int mid = a + (q - a) / 2;
        if (x == arr[mid])
        {
            p[0] = 1;
            p[1] = mid;
            return p;
        }
        else if (x > arr[mid])
        {
            a = mid + 1;
        }
        else
        {

            q = mid - 1;
        }
    }
    return p;
}
int main()
{
    FASTIO;
    TEST(test)
    {
        //cout << "INNN\n";
        long long int n, k, mini = INT_MAX;
        cin >> n >> k;
        ll l = 0, r = n - 1, store = 0;
        REP(i, 0, n)
        {

            long long int x;
            if (i % 2 == 0)
            {
                x = i / 2;
                x *= (i + 1);
                x++;
            }
            else
            {
                x = (i + 1) / 2;
                x *= (i);
                x++;
            }
            if (k - x >= 0)
            {
                mini = min(mini, k - x);
                store = i;
            }
        }
        //cout << store << " " << mini << endl;
        vector<char> v(n);
        vector<char>::iterator it;
        REP(i, 0, n)
        {
            if (i != store + 1 && i != mini)
            {
                v[i] = 'a';
            }
            else
            {
                v[i] = 'b';
            }
        }
        reverse(v.begin(), v.end());
        REP_ITER(it, v)
        {
            cout << *it;
        }
        cout << endl;
    }
}