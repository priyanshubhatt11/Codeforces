#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){      
        int n;cin>>n;
        vector<int> vec(n);
        int one =0, two =0;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>vec[i];            
            if(vec[i] == 1){
                one++;
            }
            else{                 
                two++;
            }           
            sum+=vec[i];
        }
        if(sum%2==0&& one%2==0 && two%2 == 0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}