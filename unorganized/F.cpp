#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        /* code */
        string s;
        cin >> s;
        v.push_back(s);
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < m; j++)
        {
            string t = v[0];
            t[j] = 'a' + i;
            int cnt = 0;
            bool flag = true;
            for (int k = 0; k < n; k++)
            {
                cnt = 0;
                for (int l = 0; l < m; l++)
                {
                    if (v[k][l] != t[l])
                    {
                        cnt++;
                    }
                }
                if (cnt >= 2)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << t << endl;
                return;
            }
            t[j] = v[0][j];
        }
    }
    cout << "-1" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--)
        solve();
}