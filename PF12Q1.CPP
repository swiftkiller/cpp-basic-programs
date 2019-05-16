#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

class clothing
{
 char no[20], menu[20];
 int cost, sold;
 double sale;
 void calc()
 {
  sale = sold*cost;
 }
 public:
	clothing()
	{
	 strcpy(no,"not allocated");
	 strcpy(menu,"not allocated");
	 cost = 0;
	 sold = 0;
	 sale = 0;
	}

	~clothing()
	{
	 cout<<"\n destructor called ";
	}

	void intv()
	{
	 cout<<"\nEnter model no., manufacturor, cost & sold \n";
	 cin>>no>>menu>>cost>>sold;
	 calc();
	}

	void outtv()
	{
	 cout<<"\n\nYour model no. & manufacture are \n";
	 cout<<no<<"\t"<<menu;
	 cout<<"\nYour cost, sold & sale \n"<<cost<<"\t"<<sold<<"\t"<<sale;
	}
};


void main()
{
clrscr();
{
 clothing s[5];
 int i=0;
 for(;;)
 {
  cout<<"\nEnter 1.for input  2.for display    3.for exit ";
  int c;
  cin>>c;
  if(c==1)
  {
   s[i++].intv();
  }
  else if(c==2)
  {
   for(int j=0;j<i;j++)
    s[j].outtv();
  }
  else
   goto label;
 }
}
label:
getch();
}