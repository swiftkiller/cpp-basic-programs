#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char a[20]; int i,x,j,k;
 cout<<"Enter a word ";
 cin>>a;
 x=strlen(a);
 for(i=0;i<x;i++)
  if(a[i]==a[i+1])
   {
    for(j=i+1;j<x;j++)
     a[j]=a[j+1];
    i--;
    x--;
   }
 a[i]='\0';
 cout<<"The new string is "<<a;
 getch();
}
