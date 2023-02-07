#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    vector<bool> vis(n, false);
    int x = n-1;
    for(int i=0;i<n;i++){
        vis[vec[i]-1] = true;
        while(x >=0 && vis[x]){
            cout<<x+1<<" ";
            x--;
        }
        cout<<endl;
    }


}