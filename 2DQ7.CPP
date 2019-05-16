#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[3][3],i,j;
 cout<<"Enter 9 values ";
 for(i=0;i<3;i++)
   for(j=0;j<3;j++)
     cin>>a[i][j];
 for(i=0;i<3;i++)
   {
    cout<<'\n';
    for(j=0;j<3;j++)
      {
       if(i==1||j==1)
	cout<<a[i][j]<<' ';
       else
	cout<<"  ";
      }
   }
 getch();
}