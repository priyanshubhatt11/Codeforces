#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a = n, b = n-1;
        cout<<2<<endl;
        for(int i=1;i<n;i++){
            cout<<a<<" "<<b<<endl;
            a = (a+b + 1)/2;
            b--;
        }
    }
}