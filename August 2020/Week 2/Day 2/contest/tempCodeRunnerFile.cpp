TEST(test) {
    //     ll r, c;
    //     REP(i, 0, r) {
    //         REP(j, 0, c) {
    //             arr[i][j]=0;
    //         }
    //     }
    //     arr[r-1][c-1]={ 1 };
    //     cin >> r >> c;
    //     string s[r];
    //     REP(i, 0, r) {
    //         cin >> s[i];
    //     }
    //     ll n=0, ans=0;
    //     ll a=0, b=0;
    //     ll f=0;
    //     REP(i, 0, r) {
    //         if (n==r*c)goto breaka;
    //         REP(j, 0, c) {
    //             a=i, b=j;
    //             while ((a!=r-1&&b!=c-1)||(n!=r*c)) {
    //                 if (arr[a][b]!=1) {
    //                     arr[a][b]=1;
    //                     n++;
    //                 }
    //                 if (s[a][b]=='R') {
    //                     if (b+1==c) {
    //                         s[a][b]='D';
    //                         //n++;
    //                         a++;
    //                         if (arr[a][b]!=1) {
    //                             arr[a][b]=1;
    //                             n++;
    //                         }
    //                         ans++;
    //                     }
    //                     else {
    //                         b++;
    //                         if (arr[a][b]!=1) {
    //                             arr[a][b]=1;
    //                             n++;
    //                         }
    //                     }
    //                 }
    //                 else {
    //                     if (a+1==r) {
    //                         s[a][b]='R';
    //                         b++;
    //                         if (arr[a][b]!=1) {
    //                             arr[a][b]=1;
    //                             n++;
    //                         }
    //                         ans++;
    //                     }
    //                     else {
    //                         a++;
    //                         if (arr[a][b]!=1) {
    //                             arr[a][b]=1;
    //                             n++;
    //                         }
    //                     }

    //                 }
    //                 if (n==r*c)goto breaka;
    //             }

    //         }
    //     }
    //     breaka: cout << ans << endl;
    // }