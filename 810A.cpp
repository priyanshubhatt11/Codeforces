#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int sum =0;
    int c =0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;

        sum += a;
    }
    int x = n;

    while(float(sum/(n * 1.0)) < (m - 0.5)){
        //cout<<sum/n<<" ";
        sum += m;
        n++;
    }

    cout<<n - x<<endl;
}