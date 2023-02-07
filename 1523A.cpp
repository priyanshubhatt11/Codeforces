#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int nn = max(a,b);
        int nm = min(a,b);
        int mm = max(c,d);
        int mn = min(c,d);
        if(nn < mn || mn > nm)cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }

    }
}