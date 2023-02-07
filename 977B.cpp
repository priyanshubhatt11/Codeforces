#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string s;
    cin>>s;
    unordered_map<string, int> map;
    for(int i=0;i<n-1;i++){
        string ss = s.substr(i,2);
        map[ss]++;
    }
    string ans = "";
    int c=0 ;
    for(auto i:map){
        if(c < i.second){
            c = i.second;
            ans = i.first;
        }
    }
    cout<<ans<<" ";

}