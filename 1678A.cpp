#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int zero =0;
        for(int i=0;i<n;i++)
        {
            if(a[i] == 0)
            {
                zero++;
            }
        }
        int ans=n+1;
        if(zero>0)
        {
            ans = n-zero;

        }
        else{
            for(int i=0;i<n ;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(i==j)continue;
                    if(a[i] == a[j])
                    {
                        ans=n;
                        break;
                    }
                }

            }
            // ans=ans<n?ans:n;
        }
        cout<<ans<<"\n";

        //cout<<count<<endl;
    
    }
}