#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int idx1=0,idx2=n-1;
    for(int i=1;i<n;i++){
        if(vec[idx1] < vec[i])idx1 = i;
        else break;
    }
    for(int i=n-2;i>=0;i--){
        if(vec[idx2] < vec[i]){
            idx2 = i;
        }
        else break;
    }
    //cout<<idx1<<" "<<idx2<<endl;
    bool flag = false;
    for(int i=idx1;i<=idx2-1;i++){
        //cout<<vec[i]<<" ";
        if(vec[i] != vec[i+1])flag = true;
    }
    if(flag)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}