//  https://www.youtube.com/watch?v=zD9FwlSHcAM

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int ans = n;    // all right
    for(int i=1;i<n;i++){
        ans += i * (n-i);
    }
    cout<<ans<<endl;
    
    
}