#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[3][3],b[3][3],i,j,temp,flag=0;
 cout<<"Enter 9 values ";
 for(i=0;i<3;i++)
   for(j=0;j<3;j++)
     {
      cin>>a[i][j];
      b[i][j]=a[i][j];
     }
 for(i=0;i<3;i++)
   for(j=i;j<3;j++)
     {
      temp=a[i][j];
      a[i][j]=a[j][i];
      a[j][i]=temp;
     }
 for(i=0;i<3;i++)
   for(j=0;j<3;j++)
     if(a[i][j]==b[i][j])
       flag++;
 if(flag==9)
  cout<<"\nArray is spare";
 else
  cout<<"\nArray is not spare";
 getch();
}