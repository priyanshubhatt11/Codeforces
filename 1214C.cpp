#include<bits/stdc++.h>
using namespace std;

bool solve(string s, int n){
    stack<char> st;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(st.empty()){
            if(s[i] == '(')
                st.push(s[i]);
            else{
                if(flag == true){
                    return false;
                }
                else{
                    flag = true;
                }
            }
        }
        else if(s[i] == '('){
            st.push('(');
        }
        else{
            st.pop();
        }
    }
    if(flag){
        if(st.size() == 1)return true;
        return false;
    }
    else{
        if(st.size() == 0)return true;
        return false;
    }
    
}

int main(){
    int n;cin>>n;
    string s;cin>>s;
    if(solve(s, n))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}