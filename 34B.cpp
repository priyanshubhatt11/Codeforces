#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    int i=0;
    int sum=0;
    while(i<n && m!=0){
        if(vec[i] < 0)
        sum += abs(vec[i]);
        i++;
        m--;
    }
    cout<<sum<<endl;
}