#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{  int t;
   cin>>t;
 
   while(t--)
  {	int max,i,mult,carry=0,x;
  	cin>>max;
   	string str;
   	str.push_back(49);
 
 
	for(i=1;i<=max;i++)
   	{	
	        reverse(str.begin(),str.end());
	   	for(auto it=str.begin();it!=str.end();it++)
		   {	mult=((*it)-48)*i +carry;
		   	*it=(mult)%10+48;
		   	carry=mult/10;
		   }
		while(carry)
		{	x=carry%10;
			str.push_back(x+48);
			carry=carry/10;
		}
		reverse(str.begin(),str.end());	
		
        }
       	for(auto it=str.begin();it!=str.end();it++)
		   {	cout<<*it;
		   }
	   
   	cout<<endl;  
 
 
   }
return 0;
} 
