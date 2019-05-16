#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 int a[10],b[10],c[20],i,f=0,l=19;
 cout<<"Enter 10 Nos. for array A ";
 for(i=0;i<10;i++)
  cin>>a[i];
 cout<<"\nEnter 10 Nos. for array B ";
 for(i=0;i<10;i++)
  cin>>b[i];
 for(i=0;i<10;i++)
  {
   if(a[i]%2!=0)
    c[l--]=a[i];
   else
    c[f++]=a[i];

   if(b[i]%2==0)
    c[f++]=b[i];
   else
    c[l--]=b[i];
  }
 for(i=0;i<20;i++)
  cout<<c[i]<<" ";
 getch();
}


