#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 char a[100],b,temp;
 int i,j,size;
 cout<<"Enter a word ";
 cin>>a;
 size=strlen(a);
 cout<<"\nEnter a charecter to be deleted ";
 cin>>b;
 for(i=0;i<size;i++)
   if(a[i]==b)
    {
     for(j=i;j<(size-1);j++)
       a[j]=a[j+1];
     size--;
     i--;
    }
 a[size]='\0';
 cout<<a;
 getch();
}



