#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        int ans ;
        cin>>n>>x;
        if(n == 1 || n ==2 ){
            cout<<1<<endl;
            continue;
        }
        n = n-2;
        if(n%x == 0)    ans = n/x;
        else    ans =  (n /x ) +1;
        cout<<ans+1<<endl;
    }
}