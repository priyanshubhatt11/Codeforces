#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    int inc = vec[0];
    int c= 0;
    int ans =0;
    for(int i=0;i<n;i++){
        if(inc <= vec[i]){
            
            c++;
        }
        else{
            
            c=1;
        }
        inc = vec[i];
        ans = max(ans, c);
    }
    cout<<ans;
}