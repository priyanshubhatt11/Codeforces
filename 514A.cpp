// 0 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
       cin>>s;
       int a[s.length()];
       for(int i=0;i<s.length();i++)
       {
           a[i]=s[i]-'0';
       }
      
     // for(int i=0;i<s.length();i++)
     //cout<<a[i]; 
       
       for(int i=0;i<s.length();i++)
       {
           
           if(i==0 && a[i]==9)
           continue;
           else
           a[i]=min(a[i],9-a[i]);
       }
      
      for(int i=0;i<s.length();i++)
      cout<<a[i];
}
