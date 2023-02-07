#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        vector<int> vec(3);
        for(int i=0;i<3;i++)cin>>vec[i];

        sort(vec.begin(), vec.end());
        if(vec[2] <= vec[0] + vec[1])cout<<(vec[0]+vec[1]+vec[2])/2<<endl;
        else cout<<vec[0] + vec[1]<<endl;

    }
}