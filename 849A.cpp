#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> vec(n);
    int ans =0;
    for(int i=0;i<n;i++)cin>>vec[i];
    
    if(n%2!= 0 && vec[0]%2 == 1 && vec[n-1]%2 == 1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}