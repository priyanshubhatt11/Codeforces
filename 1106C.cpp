#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    long long ans =0;
    int i=0,j=n-1;
    while(i<j){
        ans += (long long)(vec[i] + vec[j])*1LL*(vec[i] + vec[j]);
        i++;
        j--;
    }
    cout<<ans<<endl;
}