#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int total =15;
    for(int i=0;i<n;i++)
    {
        if(total >= arr[i])
        {
            total = arr[i]+15;
        }
    }
    if(total>=arr[n-1])cout<<arr[n-1];
    else    cout<<total;
}