#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> vec(n);
        long long sum =0;
        
        bool flag = false;
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        for(int i=0;i<n;i++){
            sum += vec[i] - i;
            if(sum < 0){
                flag = true;
                break;
            }
        }

        if(!flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

                        


    }
}