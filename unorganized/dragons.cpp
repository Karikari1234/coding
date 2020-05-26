#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int flag = 0;
        if (10 >= a && c >= 1)
        {
            cout << "YES" << endl;
            continue;
        }
        for (int i = 0; i < b; i++)
        {
            a = ((a / 2) + 10);
            if (a <= 0)
            {
                flag = 1;
            }
            //cout << a << endl;
        }
        a -= (10 * c);
        //cout << a << endl;
        if (a <= 0)
        {
            flag = 1;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}