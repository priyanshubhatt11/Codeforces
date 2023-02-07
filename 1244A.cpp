#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int sum =1, temp = c;
        while(c<a){
            c+=temp;
            sum++;
        }
        if((k-sum)*d<b) cout<<-1<<endl;
        else cout<<sum<<" "<<k-sum<<endl;

    }
}   