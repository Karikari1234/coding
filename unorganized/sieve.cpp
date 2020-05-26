#include <bits/stdc++.h>

using namespace std;

long long int maxim = -1;

int arr[100000001];

bool isPrime(long long int n)
{
    if (n < 2)
        return false;
    if (n == 2)
    {
        return true;
        arr[2] = 1;
    }
    for (int i = n - 1; i >= 2; i--)
    {
        /* code */
        if (n % i == 0)
        {
            return false;
        }
    }
    arr[n] = 1;
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    int test;
    cin >> test;
    long long int maxim = INT_MIN;
    while (test--)
    {
        long long int m, n;
        cin >> m >> n;
        for (int i = m; i <= n; i++)
        {
            /* code */
            if (isPrime(i) && i > maxim)
            {
                cout << i << endl;
            }
            if (maxim < i)
            {
                maxim = i;
            }
        }
        cout << endl;
    }
}