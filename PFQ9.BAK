#include<iostream.h>
#include<conio.h>

int Altersum(int b[][3],int n,int m)
{
 int sum=0,i,j;
 for(i=0;i<n;i++)
  for(j=0;j<m;j++)
   if((j+i)%2==0)
    sum+=b[i][j];
 return sum;
}

void main()
{
 clrscr();
 int b[3][3],i,j;
 cout<<"Enter values ";
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   cin>>b[i][j];
 cout<<"\nThe sum of alternate nos. is "<<Altersum(b,3,3);
 getch();
}

