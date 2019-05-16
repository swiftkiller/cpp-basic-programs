#include<iostream.h>
#include<conio.h>

void shift(int a[],int b)
{
 int i,temp;
 for(i=0;i<5;i++)
  {
   temp=a[i];
   a[i]=a[i+5];
   a[i+5]=temp;
  }
}

void main()
{
 clrscr();
 int a[10],i;
 for(i=0;i<10;i++)
 {
  cout<<"\nEnter value "<<i+1<<' ';
  cin>>a[i];
 }
 shift(a,10);
 cout<<"The new array is ";
 for(i=0;i<10;i++)
  cout<<'\n'<<a[i];
 getch();
}