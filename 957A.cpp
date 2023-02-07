#include<bits/stdc++.h>
using namespace std;

bool solve(string s, int n){
    for(int i=0;i<n-1;i++){
        if(s[i] == s[i+1] && s[i] != '?')return false;
    }
    for(int i=0;i<n;i++){
        if(s[i] == '?'){
            if(i == 0 || i == n-1)return true;
            if(i>0 && i<n-1 && s[i-1] == s[i+1])return true;
            if(i<n-1 && s[i+1] == '?')return true;
        }
    }
    return false;
}

int main(){
    int n;cin>>n;
    bool flag = false;
    string s;cin>>s;
    if(solve(s, n))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}