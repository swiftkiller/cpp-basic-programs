#include<iostream.h>
#include<conio.h>

int mt(int a[][3],int b)
{
 int i,j,x,flag=1;
 x=a[0][0];
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   if((i==j)&&(a[i][j]!=x))
    {
     flag=0;
     goto out;
    }

 out:
 if(flag==1)
  return 1;
 else
  return 0;
}

void main()
{
 clrscr();
 int a[3][3],i,j,x;
 cout<<"Enter 9 values ";
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   cin>>a[i][j];
 x=mt(a,3);
 if(x==1)
  cout<<"\nThis is a scalar matrix ";
 else
  cout<<"\nThis is not a scalar matrix ";
 getch();
}

