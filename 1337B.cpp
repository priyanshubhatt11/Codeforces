#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h, x, y;
        cin>>h>>x>>y;
        
        for(int i=0;i<x;i++){
           if(h>=20){
                h = (h/2)+10;
           }
        }
        h = h - y*10;
        
        if(h<=0)cout<<"YES"<<endl;
        else    cout<<"NO"<<endl;
    }
}