#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    string s;cin>>s;
    int a, b;
    char c1,c2;
    for(int i=0;i<m;i++){
        cin>>a>>b>>c1>>c2;
        a--;b--;    // one indexed
        for(int j=a;j<=b;j++){
            if(s[j] == c1)s[j] = c2;
        }
    }
    cout<<s<<endl;
}