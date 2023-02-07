#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int ans =0;
    if(n == 2)cout<<"0"<<endl;
    else{
        int mi = vec[0], miidx = 0;
        int mx = vec[0], mxidx = 0;
        for(int i=0;i<n;i++){
            if(vec[i] < mi){
                mi = vec[i];
                miidx = i;
            }
            if(vec[i] > mx){
                mx = vec[i];
                mxidx = i;
            }
        }
        //cout<<miidx<<" "<<mxidx<<endl;
        int mmi = 100002;
        int mmx = 0;
        for(int i=0;i<n;i++){
            if(vec[i] < mmi && i != miidx){
                mmi = vec[i];
            }
            if(vec[i] > mmx && i != mxidx){
                mmx = vec[i];
            }
        }
        //cout<<mmi<<" "<<mmx;
        ans = min(mmx - mi , mx - mmi);
        cout<<ans;
    }
    

}