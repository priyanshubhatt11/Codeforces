#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    vector<int> vec(t);
    for(int i=0;i<t;i++){
        cin>>vec[i];       
    }
    set<int> set;
    set.insert(vec[0]);
    bool flag = false;
    for(int i=1;i<t;i++){
        if(vec[i] != vec[i-1] && set.count(vec[i])){
            flag = true;
            break;
        }
        set.insert(vec[i]);
    }
    if(flag)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}
