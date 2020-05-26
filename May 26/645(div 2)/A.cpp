#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--)
    {
        int n, m;
        cin >> n >> m;
        int x = n * m;
        int k = ceil((double)x / 2);
        cout << k << endl;
    }
}