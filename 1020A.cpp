#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h,x1,x2,t;
    cin>>n>>h>>x1>>x2>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ans =0;
        if(a == c)ans = abs(b-d);
        else if(b > x1 && d> x2){
            //cout<<"d";
            ans = abs(a - c) + abs(b - x2) + abs(x2 - d);
        }
        else if(b <x1 && d<x2){
            ans = abs(a-c) + abs(b - x1) + abs(d - x1);
        }
        else ans = abs(a-c) + abs(d-b);
        cout<<ans<<endl;
    }
}
