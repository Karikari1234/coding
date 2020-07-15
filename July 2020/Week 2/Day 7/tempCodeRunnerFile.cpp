#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int32_t main()
{
    fio
 
        int n,i,j,k,t,p,q;
        cin>>n>>k;
        multiset<int> a,b,d; ///a => Alice , b => bob , d => both (d for Dono! XD)
        int al=0,bl=0;  ///al = AliceLike , bl = bobLike
 
        for(i = 0 ; i < n ; i++)
        {
           cin>>t>>p>>q;
           if(p&&q)    /// both of them like the book
           {
               d.insert(t);
               al++;
               bl++;
           }
           else if(p)  ///only alice likes the book
           {
               a.insert(t);
               al++;
           }
           else if(q)   ///only bob likes the book
           {
               b.insert(t);
               bl++;
           }
        }
 
        if(al < k || bl < k)  /// Impossible to find a possible set of books
        {
            cout<<-1<<"\n";
          return 0;
        }
 
        al = k,bl = k;
        int ans = 0;   /// ans = total time
 
        auto ita = a.begin();
        auto itb = b.begin();
        auto itd = d.begin();
 
        while(al > 0 || bl > 0)
        {
            if(al > 0 && bl > 0)
            {
                if(ita == a.end() || itb == b.end()) /// if any of the set among a and b is exhausted
                {
                    ans += *itd;
                    itd++;
                    al--;
                    bl--;
                }
                else   ///means a and b both are not exhausted
                {
                    if(itd != d.end())
                    {
                    if(*ita + *itb < *itd)  ///Choose the book with least time
                    {
                        ans += *ita + *itb ;
                        ita++;
                        itb++;
                        al--;
                        bl--;
                    }
                    else
                    {
                        ans += *itd;
                        itd++;
                        al--;
                        bl--;
                    }
                    }
                    else  ///means set of books liked by both is exhausted
                    {
                        ans += *ita + *itb ;  ///Take 1 from Alice's set and 1 from Bob's set
                        ita++;
                        itb++;
                        al--;
                        bl--;
                    }
                }
            }
            else if(al > 0)  /// greedily choose books for Alice
            {
                if(ita == a.end())  ///if Alice's set is exhausted
                {
                    ans += *itd;   /// No choice but to take it from common set
                    itd++;
                    al--;
                    bl--;
                }
                else if(itd == d.end())  ///if common set is exhausted
                {
                    ans+= *ita;    /// no choice but to take book from Alice's set
                    al--;
                    ita++;
                }
                else  /// Here we have a real choice, choose book with lesser time
                {
                    if(*ita < *itd)
                    {
                    ans+= *ita;
                    al--;
                    ita++;
                    }
                    else
                    {
                    ans += *itd;
                    itd++;
                    al--;
                    bl--;
                    }
                }
            }
            else if(bl > 0)
            {
                if(itb == b.end())  /// Bob's set is exhausted
                {
                    ans += *itd;   /// No choice but to take from common set
                    itd++;
                    al--;
                    bl--;
                }
                else if(itd == d.end())  ///If common set is exhausted
                {
                    ans+= *itb;        /// No choice but to take from Bob's set
                    bl--;
                    itb++;
                }
                else            ///here we have a real choice
                {
                    if(*itb < *itd)
                    {
                    ans += *itb;
                    bl--;
                    itb++;
                    }
                    else
                    {
                    ans += *itd;
                    itd++;
                    al--;
                    bl--;
                    }
                }
            }
        }
 
             cout<<ans<<"\n";
 
        return 0;
 
    }
 