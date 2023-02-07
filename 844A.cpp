#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int n;cin>>n;
    if(n > s.size())cout<<"impossible"<<endl;
    else {
        set<char> st;
        for(auto i:s){
            st.insert(i);
        }
        if(st.size() >= n)cout<<0<<endl;
        else
            cout<<n - st.size();

    }
}