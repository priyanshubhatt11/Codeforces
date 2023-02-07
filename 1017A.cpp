#include<bits/stdc++.h>
using namespace std;

static bool comp(pair<long long,int>&A, pair<long long ,int> &B){
    if(A.first != B.first) return A.first > B.first;

    return B.second > A.second;
}

int main(){
    int n;cin>>n;
    int a,b,c,d;
    vector<pair<long long,int>> vec;
    
    for(int i=0;i<n;i++){
        long long sum =0;
        cin>>a>>b>>c>>d;
        sum = a + b +c + d;
        vec.push_back({sum, i});
    }
    sort(vec.begin(), vec.end(), comp);
    // for(auto i:vec){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    for(int i=0;i<n;i++){
        if(vec[i].second == 0){
            cout<<i+1<<endl;
            break;
        }
    }
}