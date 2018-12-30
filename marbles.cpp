#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{	int  t;
	
	cin>>t;
	while(t--)
	{	ll n,k,res=1,i;
		scanf("%lld %lld",&n,&k);
		if(n-k<k-1)
			k=n-k+1;
		if(k==1)
			printf("1\n");
		else
		{
			for(i=1;i<k;i++)
			{	res=res*(n-i)/i; 
			
			}
			printf("%lld\n",res);
		}
 
 
   	
   	}
   return 0;
}
