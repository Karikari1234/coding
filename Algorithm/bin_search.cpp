#include <bits/stdc++.h>

using namespace std;

int *binary_search(int *arr, int size, int x)
{
    sort(arr, arr + size);
    int *p = new int[2];
    p[0] = 0;
    p[1] = x;
    int a = 0;
    int q = size - 1;
    while (a <= q)
    {
        int mid = (a + q) / 2;
        if (x == arr[mid])
        {
            p[0] = 1;
            p[1] = mid;
            return p;
        }
        else if (x > arr[mid])
        {
            a = mid + 1;
        }
        else
        {

            q = mid - 1;
        }
    }
    return p;
}

int main()
{
    int A[] = {1, 2, 3, 4, 555, 25, 34, 24, 141, 213, 123, 13, 13, 1};
    int q = sizeof(A) / sizeof(int);
    //cout << q << endl;
    int *p = binary_search(A, q, 23);
    if (p[0])
    {
        cout << "Found at index :";
        cout << p[1] << endl;
    }
    else
    {
        cout << p[1] << " Not Found " << endl;
    }
}