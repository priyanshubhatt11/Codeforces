#include<bits/stdc++.h>
using namespace std;
int main(){
   
    set<set<char>> st;
    int n;cin>>n;
    while(n--){
        string s;cin>>s;
        set<char> ss;
        for(auto i:s){
            ss.insert(i);
        }
        st.insert(ss);
    }
    cout<<st.size()<<endl;
    
}