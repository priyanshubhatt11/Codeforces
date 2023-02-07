#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int Fgcd(int n, int m){
    while(m>0){
        int rem = n%m;
        n = m;
        m = rem;
    }
    return n;
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int> vec, vec1;
        for(int i:arr){
            if(i&1)vec1.push_back(i);
            else vec.push_back(i);
        }
        for(int i:vec1){
            vec.push_back(i);
        }

        int c= 0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                //if(i==j)continue;
                if(Fgcd(vec[i], 2*vec[j]) > 1)c++;
            }
        }
        cout<<c<<endl;
    }
}
