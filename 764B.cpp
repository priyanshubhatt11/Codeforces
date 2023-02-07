#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    vector<int> odd, even;
    for(int i=0;i<n;i++){
        if(i%2 == 0)even.push_back(vec[i]);
        else odd.push_back(vec[i]);
    }
    reverse(even.begin(), even.end());
    int i=0;
    while(i<even.size() && i<odd.size()){
        cout<<even[i]<<" "<<odd[i]<<" ";
        i++;
    }
    
}