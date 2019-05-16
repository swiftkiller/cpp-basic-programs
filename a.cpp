#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n = 315;
	int a[1000]={1};
	while(n%2==0)
	{
		cout<<2;
		n/=2;			
	}	
	for(int i =3; i<=sqrt(n);i+=2)
	{
		while(n%i==0)
		{
			cout<<i;
			n/=i;
		}
	}
	
	if(n>2)
		cout<<n;
	
	return 0;
}
