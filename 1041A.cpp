#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    int ans=0;
    for(int i=0;i<n-1;i++){
        int nn = vec[i+1]- vec[i];
        if(nn!= 1){
            ans += nn-1;
        }
    }
    cout<<ans<<endl;
}