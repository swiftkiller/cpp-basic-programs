#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void pro(int a[][3],int b)
{
 int i,j,prod=1;
 for(i=0;i<3;i++)
  prod*=a[i][1];
 cout<<"\nProduct is : "<<prod;
}

void main()
{
 clrscr();
 int i,j,a[3][3],z=0;
 for(i=0;i<3;i++)
  for(j=0;j<3;j++,z++)
  {
   cout<<"Enter value "<<z+1<<' ';
   cin>>a[i][j];
  }
 pro(a,3);
 getch();
}


