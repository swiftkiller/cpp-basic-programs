#include<iostream>

using namespace std;

int main()
{
	long long t,p,k,n;
	cin>>t;

	for(int i=0;i<t;i++)
	{
		cin>>p>>k>>n;
	
		long long amt=0,rm=0,box=0;
		amt+=n/p;
		box=amt;
		for(int j=0;box>=k;j++)
		{
			amt+=box/k;
			box=(box%k)+(box/k);
		}
		cout<<amt<<'\n';
	}
	return 0;
}
