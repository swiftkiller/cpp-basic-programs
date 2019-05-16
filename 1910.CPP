#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n;
 cout<<"Enter a no. ";
 cin>>n;
 for(int i=1;i<=n;i++)
    {
     cout<<endl;
     for(int g=n-i;g>=1;g--)
	cout<<" ";
     for(int j=1;j<=i;j++)
	cout<<j;
     for(int h=j-2;h>=1;h--)
	cout<<h;
    }
 for(int a=1;a<=n;a++)
    {
     cout<<endl;
     for(int b=1;b<=a;b++)
	cout<<" ";
     for(int c=1;c<=n-a;c++)
	cout<<c;
     for(int d=c-2;d>=1;d--)
	cout<<d;
    }
 getch();
}



