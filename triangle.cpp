#include <bits/stdc++.h>

using namespace std;

bool tri(int a, int b, int c)
{
    if (a + b > c && b + c > a && a + c > b && a > 0 && b > 0 && c > 0)
        return true;
    else
    {
        return false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << b << " " << c << " " << c << endl;
    }
}
