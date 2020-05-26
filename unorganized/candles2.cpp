#include <bits/stdc++.h>

using namespace std;

int arr[32];

void calc()
{
    arr[0] = 3;
    int two = 2;
    for (int i = 1; i < 30; i++)
    {
        two = two * 2;
        arr[i] = arr[i - 1] + two;
        //cout << i + 1 << "th value = " << arr[i - 1] << " + " << two << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    calc();
    int test;
    cin >> test;
    while (test--)
    {
        int x;
        cin >> x;
        int i = 0;
        while (x % arr[i] != 0)
        {
            i++;
        }
        cout << x / arr[i] << endl;
    }
}