#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    string s;
    cin>>s;
    int ans =0;
    
    for(int i=0;i< s.length() ;i++)
    {
        if(s[i] == '1') ans += arr[0];
        else if(s[i] == '2') ans += arr[1];
        else if(s[i] == '3') ans += arr[2];
        else if(s[i] == '4') ans += arr[3];
    }
    cout<<ans;
    
}