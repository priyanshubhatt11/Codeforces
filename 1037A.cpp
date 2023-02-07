#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    long long x=1;
    int ans=0;
    while(n>0){
        ans++;
        n-=x;
        x*=2;
    }
    cout<<ans<<endl;
}