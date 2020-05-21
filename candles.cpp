#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int ans = (a + b + c) / 2;
        cout << ans << endl;
    }
}