#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string x;
        cin >> x;
        vector<int> v;
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] != '0')
            {
                int noOfZeros = x.size() - i - 1;
                int digit = x[i] - '0';
                int addend = digit * pow(10, noOfZeros);
                v.push_back(addend);
            }
        }
        cout << v.size() << endl;
        for (int i = 0; i < v.size(); i++)
        {
            /* code */
            cout << v[i] << " ";
        }
        cout << endl;
        v.clear();
    }
}