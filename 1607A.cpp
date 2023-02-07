#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        unordered_map<char, int> map;
        
        //vector<int> vec = {1, 2 ,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
        string s;cin>>s;
        for(int i=0;i<s.size();i++){
            map[s[i]] = i+1;
        }
        string str ;
        cin>>str;
        long long sum =0;
        for(int i=0;i<str.size()-1;i++){
            sum += abs(map[str[i]] - map[str[i+1]]);
        }
        cout<<sum<<endl;
    }
}