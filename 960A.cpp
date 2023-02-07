#include<bits/stdc++.h>
using namespace std;

bool solve(string s){
    int n = s.size();
    map<char,int>map;
    if(s[0]!='a' && s[n-1]!='c')return false;
    
    map[s[0]]++;
    for(int i=1;i<n;i++){
       if(s[i] < s[i-1])return false;
        map[s[i]]++;
    }
    if(map['a']==0 || map['b']==0 || map['c']==0)return false;
    if(map['c'] == map['a'] || map['c'] == map['b'])return true;

    return false;
    
}

int main(){
    string s;cin>>s;
    if(solve(s))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}