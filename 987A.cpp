#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<string> vec(n);
    unordered_map<string, pair<int, string>> map;
    map["purple"] = {1, "Power"};
    map["green"] = {1 , "Time"};
    map["blue"] = {1 , "Space"};
    map["orange"] = {1, "Soul"};
    map["red"] = {1, "Reality"};
    map["yellow"] = {1 , "Mind"};
    for(int i=0;i<n;i++){
        cin>>vec[i];
        map[vec[i]].first++;
    }
    cout<<map.size() - n<<endl;
    for(auto i:map){
        if(i.second.first == 1)cout<<i.second.second<<endl;
    }
    
}