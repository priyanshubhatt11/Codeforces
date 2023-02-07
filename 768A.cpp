#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    vector<int> vec(t);
    for(int i=0;i<t;i++){
        cin>>vec[i];
    }   

    int mi = *min_element(vec.begin(), vec.end());
    int mx = *max_element(vec.begin(), vec.end());
    int ans =0;
    for(int i=0;i<t;i++){
        if(vec[i] > mi && vec[i] < mx){
            ans++;
        }
    }
    cout<<ans<<endl;

}