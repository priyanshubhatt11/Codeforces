#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;;
        char a[n][m];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        int s,p,temp = 0;
          for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j] == 'R')
                {
                    s = i;
                    p = j;
                    temp =1;
                    break;
                }
                
            }
            if(temp == 1)break;
        }
        int flag =0;
        for(int i=s;i<n;i++)
        {
            for(int j=0;j<p;j++)
            {
                if(a[i][j] == 'R')
                {
                    flag = 1;
                    break;
                }
                if(flag == 1)
                break;
            }
        }
        if(flag == 1) cout<<"NO"<<endl;
        else    cout<<"YES"<<endl;

        

    }
}