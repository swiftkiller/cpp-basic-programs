#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct book
{
 char id[5],name[20],aurthor[20];
};


void input()
{
 book s;
 cout<<"\nEnter id, name & aurthor \n";
 cin>>s.id>>s.name>>s.aurthor;
 fstream file("t.dat",ios::app|ios::binary);
 file.write((char*)&s,sizeof(s));
 file.close();
}

void update()
{
 book s;
 char id[5];
 cout<<"\nEnter id ";
 cin>>id;
 fstream file("t.dat",ios::in|ios::out|ios::binary);
 while(file.eof()!=1)
 {
  file.read((char*)&s,sizeof(s));
   if(strcmpi(s.id,id)==0)
   {
    cout<<"\nEnter the new data ";
    cin>>s.id>>s.name>>s.aurthor;
    file.seekp(file.tellg()-sizeof(s));
    file.write((char*)&s,sizeof(s));
   }
  }
 file.close();
}



void del()
{
 book s;
 char id[5];
 cout<<"\nEnter id ";
 cin>>id;
 fstream pfile("diar.dat",ios::out|ios::binary);
 fstream file("t.dat",ios::in|ios::binary);
 while(file.eof()!=1)
 {
  file.read((char*)&s,sizeof(s));
  if(file.eof()==1)
  break;
  if(strcmpi(s.id,id)==0){}
  else
   pfile.write((char*)&s,sizeof(s));
 }
  pfile.close();
  file.close();
  remove("t.dat");
  rename("diar.dat","t.dat");

}


void display()
{
 book s;
 cout<<"\nEnter 1.Particular   2.All ";
 int c;
 char id[5];
 cin>>c;
 if(c==1)
 {
  cout<<"\nEnter id ";
  cin>>id;
  fstream file("t.dat",ios::in|ios::binary);
  if(!file)
   cout<<"error!";
  else
  while(file.eof()!=1)
  {
   file.read((char*)&s,sizeof(s));
   if(file.eof()==1)
   break;

   if(strcmpi(s.id,id)==0)
    cout<<'\n'<<s.id<<'\t'<<s.name<<'\t'<<s.aurthor;
  }
  file.close();
 }
 else
  if(c==2)
  {
   fstream file("t.dat",ios::binary|ios::in);
   if(!file)
   cout<<"error";
   else
   while(file.eof()!=1)
   {
    file.read((char*)&s,sizeof(s));
    if(file.eof()==1)
     break;

    cout<<'\n'<<s.id<<'\t'<<s.name<<'\t'<<s.aurthor;
   }
   file.close();
  }
}


void main()
{
 clrscr();
 for(;;)
 {
  cout<<"\n\nEnter 1.Input   2.Update   3.Delete   4.Display   5.Exit ";
  int a;
  cin>>a;
  if(a==1)
   input();
  else if(a==2)
   update();
  else if(a==3)
  {
   del();
  }
  else if(a==4)
   display();
  else if(a==5)
   exit(1);
 }
}