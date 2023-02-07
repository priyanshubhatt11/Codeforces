#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5];
    int x1,y1,x2,y2;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
              if(a[i][j] == 1)
            {
                x1 = i;
                y1 = j;
            }
           
        }
    }

    x2 = max(x1,2) - min(x1 ,2);
    y2 = max(y1,2) - min(y1,2);

    int sum  = x2+y2;
    cout<<sum;
    
}