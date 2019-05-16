#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 int n,b,c;
 cout<<"enter a no. ";
 cin>>n;
 for(int i=1;i<=n;i++)
   {
    int sum=0,d=0;
    for(int a=i;a>0;a/=10)
       d++;
    for(a=i;a>0;a/=10)
      {
       b=a%10;
       c=pow(b,d);
       sum=sum+c;
      }
    if(sum==i)
      cout<<i<<endl;
   }
 getch();
}