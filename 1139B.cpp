#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    
    int mm = vec[n-1];
    long long ans = vec[n-1];
    for(int i=n-2;i>=0;i--){
        mm = min(mm -1, vec[i]);
        if(mm < 0)mm =0;
        ans += mm;        
    }
    cout<<ans<<endl;

}