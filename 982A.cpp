#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string s;cin>>s;
    bool flag = true;
    int z =0;
    int x=0;
    for(int i=0;i<n-1;i++){
        // if((s[i] == '0' && s[i+1] == '1') || (s[i] == '1' && s[i+1] == '0') );
        // else{
        //     flag = false;
        //     break;
        // }
        if(s[i] == '1' && s[i+1] == '1'){
            flag = false;
        }
        if(s[i] == '0'){
            x++;
            z = max(z,x);
        }
        else x =0;
    }
    if(n == 1 && s[0] == '0')cout<<"NO"<<endl;
    else if(z == n || ( z>=3 || (n>=2 && (s[0] == '0' && s[1] == '0') || (s[n-1] == '0' && s[n-2] =='0'))) || flag == false)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
