#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 int i,x,f=0,z=0;
 char a[20],b[20];
 cout<<"Enter a string ";
 cin>>a;
 cout<<"Enter the substring ";
 cin>>b;
 x=strlen(b);
 for(i=0;a[i]!='\0';i++)
  {
   int j=0;
   REC:
   if(a[i]==b[j])
    {
     i++;
     j++;
     if(j==x)
      {
       f=1;
       z=i-x+1;
       break;
      }
     goto REC;
    }
   i=i-j;
  }
 if(f==1)
  cout<<"The starting position of substring is "<<z;
 else
  cout<<"The substring not found!!!";
 getch();
}

