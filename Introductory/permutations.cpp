#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    if(n == 2 || n == 3)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    
    int num = n - 1;
    
    while(num >= 1)
    {
        cout<<num<<" ";
        num -= 2;
    }
    
    num = n;
    
    while(num >= 1)
    {
        cout<<num<<" ";
        num -= 2;
    }
}