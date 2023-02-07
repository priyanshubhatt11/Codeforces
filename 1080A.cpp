#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    long long ans =0;
    ans += ceil((n*2.0)/k);
    ans += ceil((n*5.0)/k);
    ans += ceil((n*8.0)/k);
    cout<<ans<<endl;
}