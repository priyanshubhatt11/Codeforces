#include<bits/stdc++.h>
using namespace std;

// a b c
// b - a = c - b
// a = 2b - c
// 2b = a + c
// c = 2b - a
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int x;
        x = (2*b - c)/a;
        if(x * a == 2*b - c && x > 0){
            cout<<"YES"<<endl;
            continue;
        }
        x = (a+c)/(2*b);
        if(x * 2*b == a + c && x>0){
            cout<<"YES"<<endl;
            continue;
        }
        x = (2*b - a)/c;
        if(x*c == 2*b - a && x>0){
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;


    }
}