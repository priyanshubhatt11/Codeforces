#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    
    int x = k/2, y = k/2;
    for(int i=0;i<n;i++){
        if(s[i] == '(' && x>0){
            cout<<"(";
            x--;
        }
        if(s[i] == ')' && y>0){
            cout<<")";
            y--;
        }
    }
}