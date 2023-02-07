#include<bits/stdc++.h>
using namespace std;

bool solve(string s, string t){
     int n = s.size(),m=t.size();
//     int i,j;
//     for(i=0;i<s.size();i++){
//         if(s[i] == '*')break;
//         if(i==m || s[i] != t[i] )return false;
//     }
//     for(j=n-1;j>=0;j--){
//         if(s[j] == '*')break;
//         if(m-j==0 || s[j] != t[j])return false;
//     }

    int i,j;
    bool flag = false;
    if(n-1>m)return false;
    for(char k:s)if(k == '*'){flag = true;break;}

    if(!flag)return s == t;
    for(i=0;i<n && s[i] != '*';i++){
    }
    string s1 = s.substr(0,i);
    string t1 = t.substr(0,i);
    int x=0;
    for(j=n-1;j>=0 && s[j]!='*';j--){
        x++;
    }
   
    string s2 = s.substr(n-x);
    string t2 = t.substr(m-x);
    // cout<<s1<<" "<<t1<<endl;
    // cout<<s2<<" "<<t2<<endl;
    if(s1 == t1 && s2 == t2)return true;
    return false;
}

int main(){
    int n,m;cin>>n>>m;
    string s, t;cin>>s>>t;
    if(solve(s,t))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

   
}