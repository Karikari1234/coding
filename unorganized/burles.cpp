#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--)
    {
        int x;
        cin >> x;
        cout << x + ((x - 1) / 9) << endl;
    }
}