#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[2000];
ll dp[2000][2000];
ll n;
ll res(ll l,ll r,ll v)
{   
 
   	if(l>r)   
      		return 0;
   	if(dp[l][r]!=-1)   
     		 return dp[l][r];
   	
     	 return dp[l][r]=max(res(l+1,r,v+1)+a[l]*v, res(l,r-1,v+1)+a[r]*v);
}
int main() {
   
   	ll n,i;
   	cin>>n;
  	 for(i=0;i<n;i++)
      		scanf("%lld",&a[i]);
  	 memset(dp,-1,sizeof(dp));
   	printf("%lld",res(0,n-1,1));
   return 0;
} 
