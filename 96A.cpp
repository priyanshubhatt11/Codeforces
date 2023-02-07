#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string m1 = "0000000";
    string m2 = "1111111";
    if(s.find(m1) != -1 || s.find(m2) != -1)cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;

}