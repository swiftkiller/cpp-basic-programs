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
	 if(rear==9)
	  cout<<"\nOver flow ";
	 else
	 {
	  if(rear==-1)
	   front++;
	  rear++;
	  cout<<"\nEnter one value ";
	  cin>>q[rear];
	 }
	}

	void del()
	{
	 if(front==-1)
	  cout<<"\nEmpty ";
	 else
	 {
	  cout<<"\nDelete "<<q[front];
	  if(front==rear)
	   front=rear=-1;
	  else
	   front++;
	 }
	}

	void display()
	{
	 if(front==-1)
	  cout<<"\nEmpty ";
	 else
	  for(int i=front;i<=rear;i++)
	   cout<<q[i]<<'\t';
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




