#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n; 
    vector<int> a(n); 
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    long long ans = 0;
    
    for(int i = 1;i < n; i++)
    {
        if(a[i] >= a[i-1]) continue;
        ans += abs(a[i] - a[i - 1]);
        a[i] = a[i - 1];
    }
    
    cout<<ans;
}