#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        string s;cin>>s;
        for(int i=1;i<s.size()-1;i++){
            if(s[i] == '?'){
                if(s[i-1] == 'a'){
                    if(s[i +1] == 'b'){
                        s[i] = 'c';
                    }
                    else{
                        s[i] = 'c';
                    }
                }
                
            }
        }
    }
   
}