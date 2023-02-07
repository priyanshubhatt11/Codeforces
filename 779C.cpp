#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, k;cin>>n>>k;
    vector<int> vec1(n),vec2(n);
    for(int i=0;i<n;i++)cin>>vec1[i];
    for(int i=0;i<n;i++)cin>>vec2[i];
    vector<pair<int, int>> vec;
    for(int i=0;i<n;i++){
        vec.push_back({vec1[i] - vec2[i], i});
    }
    sort(vec.begin(), vec.end());
    int ans =0;
    for(auto i:vec){
        if(k>0 || i.first < 0){
            k--;
            ans += vec1[i.second];
        }
        else{
            ans += vec2[i.second];
        }
    }
    cout<<ans<<endl;
    

}