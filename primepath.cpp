#include<bits/stdc++.h>
using namespace std;
bool prime[10000],mark[10000];
queue< pair < int, int > > q;
int digit[10]={0,1,2,3,4,5,6,7,8,9};
 
bool p( )
{	int i,j;
	for(i=0;i<10000;i++)
	{	prime[i]=false;
	}
	for(i=2;i*i<10000;i++)
	{	if(prime[i]==false)
		for(j=i;j*i<=9999;j++)
			prime[i*j]=true;
	}
 
}
int main()
{
	int num,f,t,flag,l,r,a,b,c,d,i,j;
 
	p();
	cin>>t;
	while(t--)
	{	 flag=0;
		scanf("%d %d",&l,&r);
		for(int i=1;i<10000;i++)
			mark[i]=false;
		while(!q.empty())
			q.pop();
		q.push(make_pair(l,0));
		while(!q.empty())
		{
			num=q.front().first;
			if(num==r)
			{
				printf("%d\n",q.front().second);
				flag=1;
				break;
			}
			d=num%10;
			c=(num/10)%10;
			b=(num/100)%10;
			a=num/1000;
			for(i=9;i>=1;i--)
			{
				f=a*1000+b*100+c*10+digit[i];
				if(prime[f]==false && mark[f]==false)
				{
					mark[f]=true;
					q.push(make_pair(f,q.front().second+1));
				}
			}
			for(i=9;i>=0;i--)
			{
				f=1000*a+100*b+10*digit[i]+d;
				if(prime[f]==false && mark[f]==false)
				{
					mark[f]=true;
					q.push(make_pair(f,q.front().second+1));
				}
			}
			for(i=9;i>=0;i--)
			{
				f=1000*a+100*digit[i]+10*c+d;
				if(mark[f]==false && prime[f]==false)
				{
					mark[f]=true;
					q.push(make_pair(f,q.front().second+1));
				}
			}
			for(i=9;i>=1;i--)
			{
				f=1000*digit[i]+100*b+10*c+d;
				if(mark[f]==false && prime[f]==false)
				{
					mark[f]=true;
					q.push(make_pair(f,q.front().second+1));
				}
			}
			q.pop();
		}
		if(flag==0)
			printf("Impossible\n");
	}
	return 0;
} 
