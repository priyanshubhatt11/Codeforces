#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        
        int index;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int> brr = arr;
        int a;
        sort(arr.begin() , arr.end());
        if(arr[0] != arr[1] && arr[1] == arr[2]){
            a = arr[0];
            
        }
        else
            a = arr[n-1];
        for(int i=0;i<n;i++)
        {
            if(brr[i] == a)
            {
                cout<<i+1<<endl;
                break;
            }
        }

     
        
        
    

    }
}