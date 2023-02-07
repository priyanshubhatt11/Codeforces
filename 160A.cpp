#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int tot=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        tot += arr[i];
    }
    int half = tot/2;
    sort(arr.begin(),arr.end());
    int sum=0,c=0;
    for(int i=n-1;i>=0;i--){
        sum += arr[i];
        c++;
        if(sum > half)  break;
    }  
    cout<<c<<endl;
    
    

}