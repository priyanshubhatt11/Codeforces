#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    for(auto i : s){
        if(i == '8')c++;
    }
    
    int ans=0;
    while(n >= 11 && c--){
        n = n-11;
        ans++;
    }
    cout<<ans<<endl;
    
}