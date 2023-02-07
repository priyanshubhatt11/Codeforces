#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007;

long long fact(long long n){
    long long f = 1;
    for(long long i=3;i<=n;i++){
        f = f*i;
        f = f%MOD;
    }
    return f;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n==1)cout<<1<<endl;
        else
            cout<<fact(n*2)<<endl;
    }
}