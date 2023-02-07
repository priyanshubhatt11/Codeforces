#include<bits/stdc++.h>
using namespace std;
int n,d,x=0,y=0;
string s;
int main(){
cin>>n>>d>>s;
while(x<n-1&&y<=n){
    if(s[x]=='1')y++,x+=d;
    else x--;
}
if(y <= n)cout<<y;
else    cout<<-1;
}