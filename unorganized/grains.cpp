#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, c, d, n;
        cin >> n >> a >> b >> c >> d;
        int large = a + b;
        int small = a - b;
        int flag = 1;
        if (n * large < c - d || n * small > c + d)
            flag = 0;
        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}