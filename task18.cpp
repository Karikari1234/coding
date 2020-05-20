#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int arr[30];
    long long int barra[30];
    barra[0] = 2;
    arr[0] = 2;
    int test;
    cin >> test;
    for (int i = 1; i < 30; i++)
    {
        barra[i] = barra[i - 1] * 2;
        arr[i] = arr[i - 1] + barra[i];
        //cout << arr[i] << " " << barra[i] << endl;
    }
    while (test--)
    {
        int n;
        cin >> n;
        long long int sum = arr[n - 1];
        long long int oneSide = ((n / 2) - 1 > 0 && (n - 2) > 0 && (n - 4) / 2 >= 0) ? arr[n - 2] - arr[(n - 4) / 2] : arr[n - 2];
        cout << abs(sum - oneSide * 2) << endl;
    }
}