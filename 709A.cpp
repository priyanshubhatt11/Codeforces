#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    long long mod;
    cin>>mod;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    long long int sum =0;
    int a =0;
    for(int i:vec){
        if(i <= m){
            sum += i;
            if(sum > mod){
                sum =0;
                a++;
            }
        }
    }
   
    cout<<a;
}