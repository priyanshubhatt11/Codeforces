#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long x, n;
        cin>>x>>n;
        long long ans =0;

        if(n%4 == 0)cout<<0<<endl;
        else if(n%4 == 1)cout<<-n<<endl;
        else if(n%4 == 2)cout<<n+1<<endl;
        else cout<<n+1<<endl;
    }
}