#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 char a[20],b[20];
 int i;
 gets(a);
 for(i=0;a[i]!='0';i++)
   b[i]=a[i];
 b[i]='\0';
 cout<<b;
 getch();
}