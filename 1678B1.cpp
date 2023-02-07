#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n;
        string s;
        cin>>s;
        int count =0;
        for(int i=0;i<n-1;i += 2)
        {
            if(s[i] != s[i+1])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    
}