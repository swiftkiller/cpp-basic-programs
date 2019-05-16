#include<iostream.h>
#include<conio.h>

void dia(int a[][5],int b)
{
 int i,j,temp;
 for(i=0;i<b;i++)
  for(j=i;j<5;j++)
   if((i+j)%2==0)
    {
     temp=a[i][j];
     a[i][j]=a[i][b-1-i];
     a[i][b-i-1]=temp;
     break;
    }
}

void main()
{
 clrscr();
 int i,j,a[5][5];
 cout<<"\nEnter 9 values\n ";
 for(i=0;i<5;i++)
  for(j=0;j<5;j++)
   cin>>a[i][j];
 dia(a,5);
 cout<<"\nNew array ";
 for(i=0;i<5;i++)
 {
  cout<<'\n';
  for(j=0;j<5;j++)
   cout<<a[i][j]<<' ';
 }
 getch();
}

