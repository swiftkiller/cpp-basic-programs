#include<iostream>

using namespace std;

int main()
{
	int n=1000;
	int prime[n+1];
	//memset(prime, true, sizeof(prime));
	for(int i=0;i<=n;i++)
		prime[i]=1;
	for(int p=2;p*p<=n;p++)
	{
		if(prime[p]==1)
		{
			for(int i=p*2; i<=n;i+=p)
				prime[p]=0;
		}
	}
	int j=0;
	int rprime[500];
	for(int i=2;i<=n;i++)
		if(prime[i]==1)
		{
			rprime[j++]=i;
		}
	for(int i=0;i<j;i++)
		cout<<rprime[i];
	return 0;
}
