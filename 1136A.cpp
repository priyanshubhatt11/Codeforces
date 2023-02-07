#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        vec.push_back({x,y});
    }
    int x ;cin>>x;
    int idx;
    for(int i=0;i<n;i++){
        if(x >= vec[i].first && x <= vec[i].second){
            idx = i;
            break;
        }
    }
    cout<<n - idx <<endl;
}