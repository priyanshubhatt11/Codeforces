#include<bits/stdc++.h>
using namespace std;

void solve(long long x, long long y){
    if(x>y) swap(x,y);

        long long temp=0,ans=0;
        
        if(x==0 || y==0)  cout<<-1<<endl;
		else if(x==0 && y==0)  cout<<0<<endl; 

        else
        {
            while(y > x*2){     
                x*=2;
                ans++;
            }
            if(x==y){
                cout<<ans+x<<endl;
            }
            else{
                long long a=y-x,b=x-a;
            	x=a;
            	y=y-b;
            	ans++;
            	ans+=b;
        		cout<<ans+y<<endl;
            }
        }
}

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		long long x,y;
		cin>>x>>y;
        solve(x,y);
	}

	return 0;
}