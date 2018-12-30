#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll SmallestDifference(ll A[],ll B[],ll m,ll n) 
{ 
    	 sort(A,A+m); 
    	 sort(B,B+n); 
  
   	 ll i=0,j=0,result; 
  	 result = INT_MAX; 
   
  	  while (i<m&&j<n) 
   	 { 
        	if (abs(A[i]-B[j])<result) 
            		result=abs(A[i]-B[j]); 
  
        
        	if (A[i]<B[j]) 
            		i++; 
  
        	else
           		j++; 
    } 
 
    return result;  
} 
 
int main()
{	ll n,m,i,l,min=100000000,t,x;
	cin>>t;
	ll a[10001],b[10001];
	
	while(t--)
	{	
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{	scanf("%lld",&a[i]);
			
		}
	
		scanf("%lld",&m);
		for(i=0;i<m;i++)
		{	scanf("%lld",&b[i]);
			
		}
	
		printf("%lld\n",SmallestDifference(a,b,n,m));
		
		
   		
	}
	
	
   return 0;
}	
		
