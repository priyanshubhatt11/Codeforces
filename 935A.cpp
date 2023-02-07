#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int i =1;
    int c =0;
    while(n >= i*2){
        if(n%i == 0)c++;
        i++;
    }
    cout<<c<<endl;
}