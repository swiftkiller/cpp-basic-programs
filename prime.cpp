#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n=1000;
	bool prime[n+1];
	memset(prime, true, sizeof(prime));
	for(int p=2;p*p<=n;p++)
	{
		if(prime[p])
		{
			for(int i=p*2; i<=n;i+=p)
				prime[p]=false;
		}
	}
	int j=0;
	int rprime[500];
	for(int i=2;i<=n;i++)
		if(prime[i])
		{
			rprime[j++]=i;
		}
	for(int i=0;i<j;i++)
		cout<<rprime[i];
	return 0;
}
