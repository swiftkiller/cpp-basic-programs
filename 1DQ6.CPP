#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 clrscr();
 char a[100],b[100];
 int i,n=0,d;
 cout<<"Enter the word\n";
 gets(a);
 for(i=0;a[i]!='\0';i++)
    n++;
 for(i=0;i<(n/2);i++)
   {
    if(a[i]==a[--n])
      d=1;
    else
     {
      d=0;
      break;
     }
   }
 if(d==1)
   cout<<"\nA Palindrome ";
 else
   cout<<"\n Not a Palindrome ";
 getch();
}