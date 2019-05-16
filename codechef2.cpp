#include<iostream>

using namespace std;

int main()
{
	int t,n,m,x,y;
	long long p1,p2;
	int temp;
	cin>>t;
	cin.ignore(); 
	for(int i=0;i<t;i++)
	{
		int temp2=0,temp3=0;
		long long c;
		p1=0;
		p2=0;
		cin>>n>>m; // cuban and haitains
		for(int j=0;j<n;j++)
		{
			cin>>temp;
			if(temp2<temp)
				temp2=temp;
			p1+=temp;
		}
		
		for(int j=0;j<m;j++)
		{
			cin>>temp;
			if(temp3<temp)
				temp3=temp;
			p2+=temp;
		}	
		cin>>x>>y;
		p1=p1+((x-1)*temp2);	
		p2=p2+((y-1)*temp3);
		
		int ran,yo;
		
		if(p1==p2)
			cout<<"DRAW";
		else if(p1>p2)
			{
				cout<<"CUBANS";
				yo=p1-p2;
				ran=yo%5;
				if(ran==0)
					cout<<'\n'<<p1;
				else
				{
					p1+=ran;
					//p1=(p1*10) + ran;
					cout<<'\n'<<(p1%1000000000);
				}
			}
		
		else if(p2>p1)
		{
				cout<<"HAITIANS";
				yo=p2-p1;
				ran=yo%5;
				if(ran==0)
					cout<<'\n'<<p2;
				else
				{
					p2+=ran;
					//p2=(p2*10) + ran;
					cout<<'\n'<<(p2%1000000000);
				}
		}
							
	}
	return 0;
}
