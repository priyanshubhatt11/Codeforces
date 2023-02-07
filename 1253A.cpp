#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n), b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];

        int mi = INT_MAX, mx = INT_MIN;
        for(int i=0;i<n;i++){
            if(a[i] != b[i]){
                mi = min(mi, i);
                mx = max(mx, i);
            }
        }        
        if(mi <= mx){
            //cout<<"fd";
            int x = b[mi] - a[mi];
            if(x>0){
                for(int i=mi;i<=mx;i++){
                    a[i] += x;
                }
            }
        }
        //for(int i:a)cout<<i<<" ";
        if(a == b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}