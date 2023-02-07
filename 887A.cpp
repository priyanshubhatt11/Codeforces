#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    bool flag = false;
    int c=0;
    if(s.size() < 7)cout<<"no"<<endl;
    else{
        for(int i=0;i<s.size();i++){
           	if(s[i]=='1') {
				flag=true;
			} else {
				if(flag==true) {
					c++;
				}
			}
		}
		if(flag==true && c>=6) {
			cout<<"yes"<<endl;
		} else {
			cout<<"no"<<endl;
		}
    }
    
}