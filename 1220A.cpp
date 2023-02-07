#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string s;cin>>s;
    int z =0, o =0;
    for(int i=0;i<n;i++){
        if(s[i] == 'z')z++;
        if(s[i] == 'n')o++;
    }
    while(o--)cout<<"1"<<" ";
    while(z--)cout<<"0"<<" ";
}