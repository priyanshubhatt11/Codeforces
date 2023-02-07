#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int m;cin>>m;
    int a=-1,b=-1,c=-1;
    if(m==0)a=0;
    if(m==1)b=0;
    if(m==2)c=0;
    n = n%6; // after six moves everything comes to its original position
    for(int i=n;i>0;i--){
        if(i%2 == 0){
            int temp = b;
            b = c;
            c = temp;
        }
        else{
            int temp = a;
            a = b;
            b = temp;
        }
    }
    if(a == 0)cout<<0;
    if(b == 0)cout<<1;
    if(c == 0)cout<<2;
}