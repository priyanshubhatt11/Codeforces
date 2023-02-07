#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int mi =INT_MAX, miidx =-1, mx =INT_MIN, mxidx =-1;
    for(int i=0;i<n;i++){
        if(vec[i] <= mi){
            
            mi = vec[i];
            miidx = i;
        }
        if(vec[i] > mx){
            
            mx = vec[i];
            mxidx = i;
        }
    }
    if(mxidx > miidx){
        cout<< mxidx  + (n - miidx) - 2;    // minimum value index increases when one swap is done
                                            // by maximum value
    }
    else{
        cout<<mxidx+ (n-miidx) -1 ;
    }
}
