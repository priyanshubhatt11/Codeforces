#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> A(3);
    vector<char> B(3);
    vector<char> C(3);
    for(int i=0;i<3;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>B[i];
    }
    for(int i=0;i<3;i++)
    {
        cin>>C[i];
    }
    for(int i=0;i<3;i++)
    {
        if(A[i] != C[3-i-1])
        {
            cout<<"NO\n";
            return 0;
        }
        
    }
    for(int i=0;i<3;i++)
    {
        if(B[i] != B[3-i-1])
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
}