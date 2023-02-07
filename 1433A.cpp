#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    int total=0;
    for(int i=1;i<=9;i++){
            int sum=0;
            for(int j=1;j<=4;j++){
                sum = sum*10 +i;
                total += j;
                if(sum == n){
                    return total;
                }
            }
        }
        return total;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<solve(n)<<endl;
    }
}