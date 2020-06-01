#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--)
    {
        long long int a, b, c, d;
        cin >> a >> b >> c >> d;
        long long int x = (c - a) * (d - b) + 1;
        cout << x << endl;
    }
}