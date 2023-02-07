#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int x1=n,y1 = m;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<y1;j++){
            if(arr[i][j] == '*')
            {
                x1 = min(x1,i);
                y1 = j;
                break;
            }
            
        }
    }
    //cout<<x1<<y1<<endl;
    int x2=0,y2 =0;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-1;j>=y2;j--)
        {
            if(arr[i][j] == '*')
            {
                x2 = max(x2,i);
                y2 = j;
                break;
            }
        }
    }
    //cout<<x2<<y2;

    for(int i=x1;i<=x2;i++)
    {
        for(int j=y1;j<=y2;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
}