#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--)
    {
        int a, b;
        cin >> a >> b;
        if (max(a, b) > 2 * min(a, b))
        {
            cout <<  max(a, b) * max(a, b) << endl;
        }
        else
        {
            cout << 4 * min(a, b) * min(a, b) << endl;
        }
    }
}