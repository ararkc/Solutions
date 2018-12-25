#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int max(int a,int b,int c)
{	return a>b?(a>c?a:c):(b>c?b:c);
}

int main()
{	int  t;
	
	cin>>t;
	while(t--)
	{	int n,m,i,j,max1;
		
		scanf("%d %d",&n,&m);
		int a[n][m];
		for(i=0;i<n;i++)
		{	for(j=0;j<m;j++)
			{		
				scanf("%d",&a[i][j]);
			}
		}
		if(n==1&&m>=1)
		{	max1=a[0][0];
			for(i=1;i<m;i++)
			{	if(a[0][i]>max1)
				max1=a[0][i];
			}
			printf("%d\n",max1);
		}
		else if(n>=1&&m==1)
		{	max1=a[0][0];
			for(i=1;i<n;i++)
			{	if(a[i][0]>max1)
				max1=a[i][0];
			}
			printf("%d\n",max1);
		}
		else
		{
		
			for(i=n-2;i>=0;i--)
			{	for(j=0;j<m;j++)
				{	if(j==0)
					{	a[i][j]=max(a[i][j]+a[i+1][j],a[i][j],a[i][j]+a[i+1][j+1]);
					}
					else if(j==m-1)
					{
						a[i][j]=max(a[i][j]+a[i+1][j],a[i][j]+a[i+1][j-1],a[i][j]);
					}
					else
					{	a[i][j]=max(a[i][j]+a[i+1][j],a[i][j]+a[i+1][j-1],a[i][j]+a[i+1][j+1]);
					}
				}
			}
			max1=a[0][0];
			for(i=1;i<m;i++)
			{	if(a[0][i]>max1)
				max1=a[0][i];
			}
			printf("%d\n",max1);
		}
			
		
   	}
   return 0;
}	
