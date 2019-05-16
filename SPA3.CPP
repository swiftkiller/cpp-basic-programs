#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a;
 cout<<"please enter a natural no. ";
 cin>>a;
 for(int b=a;b>0;b--)
 {
  for(int c=0;c<b;c++)
  {
   cout<<'_';
   for(int d=0;d<c;d++)
   {
    cout<<'*';
   }
  }
  cout<<endl;
 }
}