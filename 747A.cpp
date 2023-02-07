#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m = sqrt(n);
    cout<< sqrt(n)<<endl;
    while(n%m !=0)
    {
        m -= 1;
    }
    cout<<m<<" "<<n%m;
}
/*
a=int(input())
b=int(a**0.5)
while a%b!=0:
	b-=1
print(b,a//b)
*/