#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin>>s;
    int len = s.length();
    
    int maxCount = 0, count = 1, i = 1;
    
    while(i < len)
    {
        if(s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            maxCount = max(maxCount, count);
            count = 1;
        }
        i++;
    }
    
    maxCount = max(maxCount, count);
    
    cout<<maxCount<<" ";
}