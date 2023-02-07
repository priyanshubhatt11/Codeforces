#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    bool f = true;
    for(int i=1;i<=n;i++){
        if(i<n){
            if(f==true)
                cout<<"aa";
            else cout<<"bb";
            i++;
        }
        else{
            if(f)cout<<"a";
            else cout<<"b";
        }
        f = !f;
    }
}