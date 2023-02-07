#include<bits/stdc++.h>
using namespace std;
//  (10⋅2)/6≈3.333

int main(){
    int n;cin>>n;
    int qt, x;cin>>qt>>x;
    vector<int> vec(n);
    long long sx=0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        sx += vec[i];
    }
    
    sort(vec.begin()+1, vec.end());
    for(int i=n-1;i>=0;i--){
        if((qt*vec[0])/sx >=x){
            cout<<n-1-i;
            break;
        }
        sx -= vec[i];
    }

    


}