#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 char a[20];
 int i,j;
 cout<<"Enter a word ";
 cin>>a;
 for(i=0;a[i]!='\0';i++)
   {
    cout<<"\n";
    for(j=0;j<=i;j++)
       cout<<a[j];
   }
 getch();
}