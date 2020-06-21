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
//O(n^3)
void subString(char str[], int n)
{
    // Pick starting point
    for (int len = 1; len <= n; len++)
    {
        // Pick ending point
        for (int i = 0; i <= n - len; i++)
        {
            //  Print characters from current
            // starting point to current ending
            // point.
            int j = i + len - 1;
            for (int k = i; k <= j; k++)
                cout << str[k];

            cout << endl;
        }
    }
}

//O(n^2)  guess
void printAllSubstrings(string s, int n)
{
    /* 
     * Fix start index in outer loop. 
     * Reveal new character in inner loop till end of string. 
     * Print till-now-formed string. 
     */
    for (int i = 0; i < n; i++)
    {
        char temp[n - i + 1];
        int tempindex = 0;
        for (int j = i; j < n; j++)
        {
            temp[tempindex++] = s[j];
            temp[tempindex] = '\0';
            printf("%s\n", temp);
        }
    }
}

int main()
{
    FASTIO;
    char str[] = "abc";
    subString(str, strlen(str));
    string s = "Geeky";
    printAllSubstrings(s, s.length());
    return 0;
}