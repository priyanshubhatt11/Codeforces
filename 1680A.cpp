#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;

        if(r1 >= l2 and l2 >= l1)
        {
            cout<<l2<<endl;
        }
        else if(l1 > l2 and l1 <= r2) cout<<l1<<endl;
        else{
            cout<<l2+l1<<endl;
        }
    }
}