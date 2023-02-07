#include<bits/stdc++.h>
using namespace std;


void solve(int n){
    if(n>45){
        cout<<-1<<endl;
        return;
    }
    vector<int> ans;
    for(int i=9;i>=1;i--){
        if(n >= i){
            ans.push_back(i);
            n -= i;
        }
    }
    sort(ans.begin(), ans.end());
    for(int i:ans){
        cout<<i;
    }
    cout<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        solve(n);
    }
}