#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t; cin>>t;
   while(t--)
   {
       int x, y; cin>>x>>y;
       int grid = max(x, y);
       
       long long st = (1ll*grid - 1) * (1ll*grid - 1) + 1; 
       long long end = (1ll*grid) * (1ll*grid);
       long long ans;
       
       if(grid % 2)
       {    
           if(x < y)
           {
               ans = st + y - 1;
               ans += (y - x);
           }
           else
           {
               ans = st + y - 1;
           }
           
       }
       else
       {
           if(x <= y)
           {
               ans = st + x - 1;
           }
           else
           {
               ans = st + x - 1;
               ans += (x - y);
           }
       }
       
       cout<<ans<<" ";
       
   }
}