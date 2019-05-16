#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>


struct book
{
 int no,price;
 char name[20];
 book *link;
};


class stack
{
 book *top;
 public:
	stack()
	{
	 top=NULL;
	}

	void push()
	{
	 book *node=new book;
	 cout<<"\nEnter no, name and price \n";
	 cin>>node->no>>node->name>>node->price;
	 node->link=top;
	 top=node;
	}

	void pop()
	{
	 if(top==NULL)
	  cout<<"\nEmpty stack \n";
	 else
	 {
	  book *t=top;
	  cout<<"\nDeleted "<<t->name;
	  top=top->link;
	  delete t;
	 }
	}

	void display()
	{
	 if(top==NULL)
	  cout<<"\nEmpty\n";
	 else
	  for(book *i=top;i!=NULL;i=i->link)
	   cout<<i->no<<i->name<<i->price<<'\n';
	}
};

void main()
{
 clrscr();
 stack obj;
 for(;;)
 {
  cout<<"\nEnter 1.Interst   2.Delete   3.Display   4.Exit ";
  int f;
  cin>>f;
  if(f==1)
   obj.push();
  else if(f==2)
   obj.pop();
  else if(f==3)
   obj.display();
  else
   exit(0);
 }
}



