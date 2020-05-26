#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[n];
        int arr2[n];
        int even = 0;
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        //c//out << " ini even , ini odd " << even << " " << odd << endl;
        if (even % 2 == 0 && odd % 2 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            int flag = 0;
            int cnt = 0;
            sort(arr, arr + n);
            int one_diff = 0;
            for (int i = 0; i < n; i++)
            {
                if (abs(arr[i] - arr[i + 1]) == 1 && (i < n - 1))
                {
                    one_diff += 2;
                    i++;
                    flag = 1;
                }
                else
                {
                    arr2[cnt] = arr[i];
                    cnt++;
                }
            }
            if(flag){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
            // for (int i = 0; i < cnt; i++)
            // {
            //     /* code */
            //     cout << "CUnt " << arr2[i] << endl;
            // }

            //cout << " ONe diff " << one_diff << endl;
            // if (one_diff == n)
            // {
            //     cout << "YES\n";
            // }
            // else
            // {
            //     int e = 0;
            //     int o = 0;
            //     for (int i = 0; i < cnt; i++)
            //     {
            //         if (arr2[i] % 2 == 0)
            //             e++;
            //         else
            //             o++;
            //     }
            //     //cout << "Later e and o " << e << " " << o << endl;
            //     if (e % 2 == 0 && o % 2 == 0)
            //     {
            //         cout << "YES\n";
            //     }
            //     else
            //     {
            //         cout << "NO\n";
            //     }
            // }
        }
    }
}