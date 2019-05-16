#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
 clrscr();
 int i,k,z,x,y,p;
 char a[20],j;
 cout<<"\nEnter a string\n";
 cin>>a;
 strupr(a);
 p=y=strlen(a);
 for(i=0;i<y;i++)
 {out:
  for(j='A';j<='Z';j++)
  {
   if(a[i]==j)
   {
    k=0;
    for(z=i;z<y;z++)
    {
     if(a[z]==j)
     {
      y--;
      k++;
      for(x=z;x<p;x++)
       a[x]=a[x+1];
      z--;
     }
    }
   cout<<(char)j<<" - "<<k<<'\n';
   goto out;
   }
  }
 }
 getch();
}


