#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        // right of matrix should be all down
        // and bottom of matrix should all right
        int ans =0;
        char x;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>x;
                if(j == m-1 && x == 'R')ans++;
                if(i == n-1 && x == 'D')ans++;
            }
        }
        cout<<ans<<endl;
    }
}