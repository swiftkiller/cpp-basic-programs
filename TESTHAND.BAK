#include<fstream.h>
#include<conio.h>
void main()
{
 clrscr();
 char a[3],j,i,b[3];
 int c[3],d[3]={1,2,3};
 for(i=0;i<3;i++)
  {a[i]=d[i];
  cout<<a[i];}
  cout<<'\n';
 ofstream ofile("story.txt");
 for(i=0;i<3;i++)
  ofile.put(a[i]);
 ofile.close();
 ifstream ifile("story.txt");
 for(i=0;i<3;i++)
  ifile.get(b[i]);
 ifile.close();
 for(i=0;i<3;i++)
  {
   c[i]=b[i];
   cout<<c[i]-48;
  }
 getch();
}

