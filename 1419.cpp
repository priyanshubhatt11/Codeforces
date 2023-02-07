#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int r_even=0, r_odd =0, b_even =0, b_odd =0;
        for(int i=0;i<n;i++){
            if(i%2 == 0){
                if((s[i] - '0')%2 == 0){
                    r_even++;
                }
                else r_odd++;
            }
            else{
                if((s[i]-'0')%2 == 0){
                    b_even++;
                }
                else b_odd++;
            }
        }
        int f=0;
        for(int i=0;i<n-1;i++){
            if(f == 0){
                if(r_even > 0){
                    r_even--; // raze will lose if last digit is even so remove even first
                }
                else r_odd--;

                f = 1;
            }
            else{
                if(b_odd > 0) {
                    b_odd--;    // breach will lose if last digit is odd so remove odd first
                }
                else b_even--;
                f = 0;
            }
        }
        if(r_even || b_even)cout<<2<<endl;
        else cout<<1<<endl;
    }
}