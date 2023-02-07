#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    string str = "Bulbasaur";
    unordered_map<char, int> map;
    for(auto i:s){
        map[i]++;
    }
    int ans = INT_MAX;
    for(auto i:str){
        if(i == 'a'||i == 'u')ans = min(ans, map[i]/2);
        else 
        ans = min(ans , map[i]);
    }   
    cout<<ans;
}