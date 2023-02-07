#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=-1,r=-1;
        for(int i=0;i<n-1;i++){
            if(s[i] != s[i+1]){
                l=i;
                r=i+1;
                break;
            }
        }
        if(l == -1 && r== -1){
            cout<<l<<" "<<r<<endl;
        }
        else{
            cout<<l+1<<" "<<r+1<<endl;
        }
        
    }
}