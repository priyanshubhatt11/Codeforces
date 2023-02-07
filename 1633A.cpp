#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n%7 == 0)cout<<n;
        else{
            int ans =0;
            for(int i=0;i<=10;i++){
                if((n +i - n%10)%7==0){
                    ans = n+i - n%10;
                    break;
                }
            }
            cout<<ans;
        }
        
        cout<<endl;
    }
    
}
   

