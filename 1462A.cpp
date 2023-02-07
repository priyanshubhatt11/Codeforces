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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int brr[n];
        int i=0,j=n-1;
        for(int k=0;k<n;)
        {
            brr[k] = arr[i];
            i++;
            k++;
            brr[k] = arr[j];
            j--;
            k++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<brr[i]<<" ";
        }
        cout<<endl;
    }
}