#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class st
{
 int stack[10];
 int top;
 public:
	st()
	{
	 top=-1;
	}

	void push()
	{
	 if(top==9)
	  cout<<"\nOver flow ";
	 else
	 {
	  top++;
	  cout<<"\nEnter Integer ";
	  cin>>stack[top];
	 }
	}

	void pop()
	{
	 if(top==-1)
	  cout<<"\nUnderflow ";
	 else
	 {
	  cout<<"\nDeleted "<<stack[top];
	  top--;
	 }
	}


	void display()
	{
	 if(top==-1)
	  cout<<"\nUnderflow ";
	 else
	 {
	  for(int i=top;i>=0;i--)
	   cout<<stack[i]<<'\t';
	 }
	}
};


void main()
{
 clrscr();
 st obj;
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

