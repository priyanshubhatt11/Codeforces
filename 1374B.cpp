#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int c=0;
        while(n>1){
            if(n%6==0){
                n=n/6;
            }
            else{
                n = n*2;
            }
            c++;
            //cout<<n<<" ";
        }
        if(n==1)cout<<c<<endl;
        else cout<<-1<<endl;
    }
}