#include <bits/stdc++.h>

using namespace std;

int arr[2];

int *Digits(long long int n)
{
    int largest = 0;
    int smallest = 9;

    while (n)
    {
        int r = n % 10;

        // Find the largest digit
        largest = max(r, largest);

        // Find the smallest digit
        smallest = min(r, smallest);

        n = n / 10;
    }
    arr[0] = largest;
    arr[1] = smallest;
    return arr;
}

int main()
{
    ios::sync_with_stdio(false);
    long long int test;
    cin >> test;
    while (test--)
    {
        long long int a, K;
        cin >> a >> K;
        for (int i = 0; i < K - 1; i++)
        {
            int *p;
            p = Digits(a);
            if (p[0] * p[1] == 0)
                break;
            a = a + p[0] * p[1];
        }
        cout << a << endl;
    }
}