#include<iostream>

using namespace std;

int main()
{
	int t,u,l,c,tmp,sum=0;
	cin>>t;
	for(;t--;)
	{
		cin>>u>>l;
		for(;u<=l;u++)
		{
			sum=0;
			c=0;
			for(int i = 2 ; i<=u/2+1 ; i++)		//prime number check
			{
				if(u%i==0)
					c++;
				if(c==1)
					break;
			}
			if(c==0)
			{
				tmp=u;
				label:
				for(;tmp>0;tmp/=10)
				{
					sum+=tmp%10;
				}
				//cout<<sum<<' ';
				if(sum/10!=0)
					{
						tmp=sum;
						sum=0;
						goto label;	
					}
				else
				{
					if(sum<=2)
						cout<<2<<' ';
					else
					{
						c=1;
						for(;c==1;sum--)
						{
						 c=0;
						 for(int i = 2 ; i<=sum/2+1 ; i++)	//prime number check
						 {		
							if(sum%i==0)
								c++;
							if(c==1)
								break;
						 }
						}
						cout<<sum+1<<' '; 
					}
				}
			}
		}
	}
	return 0;
}


