#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    sort(vec.begin(), vec.end()), greater<int>();
    vector<int> v1, v2;
    vector<int> ans(n);
    int x=0,j=n-1;
    bool flag = true;
    for(int i=0;i<n;i++){
        if(flag){
            ans[x] = vec[i];
            flag = !flag;
            x++;
        }
        else{
            ans[j] = vec[i];
            flag = !flag;
            j--;
        }
            
    }
    for(auto i:ans)cout<<i<<" ";
    
    
}