#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> vec(n*2);
        for(int i=0;i<2*n;i++){
            cin>>vec[i];
        }
        sort(vec.begin(), vec.end());

        cout<<abs(vec[n-1] - vec[n])<<endl;
    }
}