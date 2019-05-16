#include<iostream.h>
#include<conio.h>

struct employee
{
 int id;
 char name[20];
 float basic,da,hra,pf,nsal;
};

void main()
{
 clrscr();
 employee e[5];
 for(int i=0;i<5;i++)
 {
  cout<<"\nEnter your id and name ";
  cin>>e[i].id>>e[i].name;
  cout<<"\nEnter your Basic, DA, HRA and PF ";
  cin>>e[i].basic>>e[i].da>>e[i].hra>>e[i].pf;
  e[i].nsal=e[i].basic+e[i].da+e[i].hra-e[i].pf;
 }
 for(i=0;i<5;i++)
  cout<<e[i].id<<", Your salary is "<<e[i].nsal<<endl;
 getch();
}



