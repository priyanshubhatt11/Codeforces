#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        if(n == 1){
            cout<<vec[0]<<endl;
            continue;
        }
        sort(vec.begin(), vec.end());
        
        int xx = vec[0];
        for(int i=1;i<n-1;i++){
            xx += vec[i];
            vec[i] = vec[i] - vec[i-1];
        }
        vec[n-1] += vec[n-2] + xx;
        cout<<vec[n-1]<<endl;

    }
}