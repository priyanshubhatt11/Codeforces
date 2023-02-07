#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ans =0;
        int a,b;
        cin>>a>>b;
        if(a==b) {
            cout<<ans<<endl;
            continue;
        }
        if(abs(a-b)%10 == 0)
        {
            cout<<abs(a-b)/10<<endl;
        }
        else{
            cout<< (abs(a-b)/10 ) +1 <<endl;
        }

    }
}