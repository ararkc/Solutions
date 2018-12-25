#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{	string str;
	while(cin>>str)
	{	if(str.length()==1&&str[0]==49)
			cout<<"1"<<endl;
	else{
	
		string s,s2,s3;
		int carry=0,x,mult,z,count=0,i=2;
	
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
	 	auto it2=str.begin();	
			z=*it2-48-2;
			
			if(z<0)
			{	s3.push_back(10+z+48);
				
				it2++;
				while((*it2==48)&&it2!=str.end())
				{	
					s3.push_back(57);
					it2++;	
				}
				if((it2)!=s2.end())
				{
						s3.push_back(*it2-1);
						
						it2++;
				}
			}
			else if(z>=0)
			{	s3.push_back(*it2-2);
				it2++;
			
			}
				
		for(;it2!=str.end();it2++)
		{	s3.push_back(*it2);		
		}
		reverse(s3.begin(),s3.end());
		for(auto it3=s3.begin();it3!=s3.end();it3++)
			{	if(count==0&&(*it3==48))
					continue;
				count++;
				if(count>0)
					cout<<*it3-48;	
			}
			cout<<endl;
	}
	}
	
	
	return 0;	
	
} 
