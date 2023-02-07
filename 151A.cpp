#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink = k*l;
    drink = drink/nl;
    int slices = c*d;
    int salt = p/np;
    
    int ans = min(min(drink , slices),salt)/n;
    cout<<ans;
}