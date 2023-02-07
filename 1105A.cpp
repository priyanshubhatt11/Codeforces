#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int x=0;
    int ans=INT_MAX;
    for(int i=1;i<=100;i++){
        int c =0;
        for(int j=0;j<n;j++){
            if(abs(vec[j] - i) > 1){
                c += min(abs(vec[j] -i - 1) , abs(vec[j] -i +1));
            }
        }  
        if(ans > c){
            ans = c;
            x = i;
        }
    }
    cout<<x<<" "<<ans<<endl;
}