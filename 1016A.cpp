#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    long long mm =0;

    for(int i=0;i<n;i++){
        mm += vec[i];

        cout<< mm/m<<" ";

        mm = mm%m;
    }
}