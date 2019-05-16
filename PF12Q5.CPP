#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class Q
{
 int q[10];
 int front,rear;
 public:
	Q()
	{
	 front=rear=-1;
	}

	void insert()
	{
	 if((rear==9 && front==0)||(rear==front-1))
	  cout<<"\nFull ";
	 else if(rear==-1)
	  front=rear=0;
	 else
	  if(rear==9 && front!=0)
	   rear=0;
	  else
	   rear++;
	 cout<<"\nEnter value ";
	 cin>>q[rear];
	}

	void del()
	{
	 if(front==-1)
	  cout<<"\nEmpty ";
	 else
	 {
	  cout<<"\nDeleted "<<q[front];
	  if(front==rear)
	   front=rear=-1;
	  else
	   if(front==9)
	    front=0;
	  else
	   front++;
	 }
	}

	void display()
	{
	 if(front==-1)
	  cout<<"\nEmpty ";
	 else
	 {
	  if(front>rear)
	  {
	   for(int i=front;i<=9;i++)
	    cout<<q[i]<<'\t';
	   for(i=0;i<=rear;i++)
	    cout<<q[i]<<'\t';
	  }
	  else
	   for(int i=front;i<=rear;i++)
	    cout<<q[i]<<'\t';
	 }
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



