#include<iostream.h>
#include<conio.h>

int skew(int a[][3],int b)
{
 int i,j,flag=0,w=0;
 for(i=0;i<b;i++)
  for(j=0;j<3;j++)
  {
   if((a[i][j]==-a[j][i])&&(i!=j))
    w++;
   else if((i==j)&&a[i][j]==0)
    w++;
  }
 if(w==9)
  return 1;
 else
  return 0;

}

void main()
{
 clrscr();
 int i,j,a[3][3];
 cout<<"\nEnter 9 values ";
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   cin>>a[i][j];
 int x=skew(a,3);
 if(x==1)
  cout<<"\nThe matrix is skew symmetric ";
 else
  cout<<"\nThe matrix is not skew symmetric ";
 getch();
}

