#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--)
    {
        int len = INT_MAX;
        string s;
        cin >> s;
        int arr[3];
        arr[0] = -1;
        arr[1] = -1;
        arr[2] = -1;
        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i] - '1'] = i;
            int x = *min_element(arr, arr + 3);
            if (x != -1)
            {
                len = min(len, i - x + 1);
            }
        }
        if (len == INT_MAX)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << len << endl;
        }
    }
}