#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long n;cin>>n;
        int ans=0;
        while(n>=10){
            ans += (n/10)*10;
            n = (n%10) + n/10; 
        }
        cout<<ans+n<<endl;
    }
}