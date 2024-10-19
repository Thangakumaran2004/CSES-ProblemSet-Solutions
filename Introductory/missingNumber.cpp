#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n, num; cin>>n;
   long long numSum = 0;
   
   for(int i = 1; i < n; i++)
   {
       cin>>num;
       numSum += num;
   }
   
   long long totSum = (1ll*n * (1ll*n + 1)) / 2;
   
   cout<<totSum - numSum<<" ";
   
}