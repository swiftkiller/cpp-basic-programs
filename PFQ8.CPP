#include<iostream.h>
#include<conio.h>
#include<stdio.h>

struct student
{
 int rollno;
 char name[34];
 float marks;
};

void sort(student a[],int s)
{
 student temp;
 for(int i=0;i<s;i++)
  for(int j=0;j<s-i-1;j++)
   if(a[j].marks<a[j+1].marks)
    {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
    }
}


void main()
{
 clrscr();
 student a[3];
 for(int i=0;i<3;i++)
 {
  cout<<"\nEnter Roll no., name and marks ";
  cin>>a[i].rollno>>a[i].name>>a[i].marks;
 }
 sort(a,3);

 cout<<"\nThe new order of roll no. according to marks ";
 for(i=0;i<3;i++)
  cout<<a[i].rollno<<"/n";
 getch();
}



