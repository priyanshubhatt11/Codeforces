#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> vec(n+2);
    vec[0]=0;
    vec[n+1] = 1001;
    for(int i=1;i<=n;i++){
        cin>>vec[i];
    }
    int c=0, ans=0;
    for(int i=1;i<=n;i++){
        if(vec[i] == vec[i-1]+1 && vec[i]+1 == vec[i+1])c++;
        else{
            c=0;
        }
        ans = max(ans, c);
    }
    cout<<ans<<endl;
}