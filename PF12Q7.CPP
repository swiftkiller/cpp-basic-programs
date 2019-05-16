#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>


struct book
{
 int no,price;
 char name[20];
 book *next;
};


class Q
{
 book *front,*rear;
 public:
	Q()
	{
	 front=rear=NULL;
	}

	void insert()
	{
	 book *node=new book;
	 cout<<"\nEnter no, name and price ";
	 cin>>node->no>>node->name>>node->price;
	 node->next=NULL;
	 if(rear==NULL)
	  front=rear=node;
	 else
	 {
	  rear->next=node;
	  rear=node;
	 }
	}

	void del()
	{
	 if(front==NULL)
	  cout<<"\nEmpty\n";
	 else
	 {
	  book *t=front;
	  cout<<"\nDeleted "<<t->name;
	  if(front==rear)
	   front=rear=NULL;
	  else
	   front=front->next;
	  delete t;
	 }
	}

	void display()
	{
	 if(front==NULL)
	  cout<<"\nEmpty\n";
	 else
	  for(book *t=front;t!=NULL;t=t->next)
	   cout<<t->no<<t->name<<t->price<<'\n';
	}
};


void main()
{
 clrscr();
 Q obj;
 for(;;)
 {
  cout<<"\nEnter 1.Interst   2.Delete   3.Display   4.Exit ";
  int f;
  cin>>f;
  if(f==1)
   obj.insert();
  else if(f==2)
   obj.del();
  else if(f==3)
   obj.display();
  else
   exit(0);
 }
}




