#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[5],x,i,j;
 cout<<"Enter a Number\n";
 cin>>x;
 for(int k=4;x!=0;k--)
  {
   a[k]=x%10;
   x/=10;
  }
 for(i=k+1;i<5;i++)
   {
    cout<<"\n";
    for(j=k+1;j<=i;j++)
       cout<<a[j];
   }
 getch();
}