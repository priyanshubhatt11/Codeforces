#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char> v;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '1' || s[i] == '2' || s[i] == '3')
        {
            v.push_back(s[i]);
        }
    }
    sort(v.begin(),v.end());
    int j =0;
    for(char i:v)
    {
        s[j] = i;
        j +=2;
    }
    // int j=0;
    // for(int i=0;i<s.size();i=+2)
    // {
    //     s[i] = v[j];
    //     j++; 
    // }
    cout<<s;
}