#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n%4 == 0){
            cout<<n/4<<" "<<n/4<<" "<<n/4<<" "<<n/4<<endl;
        }
        else{
            cout<<(n-3)<<" 1 1 1"<<endl;
        }

    }

}