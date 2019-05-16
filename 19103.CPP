#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 float n,sumi=0,sump=0,product=1;
 cout<<"Enter a no. ";
 cin>>n;
 for(int i=1;i<=n;i++)
   sumi=sumi+i;
 for(int j=2;j<=n+1;j++)
   {
    for(int k=1;k<=j-1;k++)
      product=product*k;
    sump=sump+(j/product);
   }
 cout<<"\nThe sum is  "<<sumi+sump;
 getch();
}