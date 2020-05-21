#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    char arr[26];
    char a = 'a';
    for (int i = 0; i < 26; i++)
    {
        arr[i] = a;
        a++;
    }
    while (test--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        while (a)
        {
            int k = 0;
            for (int i = 0; i < c; i++)
            {
                cout << arr[k % 26];
                k++;
                a--;
                if (!a)
                {
                    break;
                }
            }
        }
        cout << endl;
    }
}