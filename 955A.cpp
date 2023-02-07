#include<bits/stdc++.h>
using namespace std;
int main(){
    float hh, m;
    cin>>hh>>m;
    float h, cinc, price, n;  // hunger level , without food , cost , decreases
    cin>>h>>cinc>>price>>n;
    float ans;
    float mm = hh*60 + m; // minutes
    float mx = 20*60;
    if(mm >= mx){
        ans = (h*price)/n;
    }
    else{
        float temp = mx - mm;
        float x = (temp*cinc+ h)*(price-price*0.20)/n;
        float y = (h*price)/n;
        ans = min(x,y);
    }
    cout<<ans<<endl;
}