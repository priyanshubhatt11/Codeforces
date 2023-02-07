#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
    string s;cin>>s;
    int o=0,z=0;
    for(int i=0;i<s.size();i++){
        if(s[i] == '1')o++;
        else    z++;
    }
    int nn = min(o,z);
    if(nn%2 == 0 )cout<<"NET"<<endl;
    else cout<<"DA"<<endl;
    }
}