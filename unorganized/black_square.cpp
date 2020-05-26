#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        sum += arr[s[i] - '0' - 1];
    }
    cout << sum << endl;
}