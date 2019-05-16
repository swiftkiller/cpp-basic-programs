#include <iostream>
#include <cmath>
using namespace std;
bool prime(int n)
{
    for (int i=2;i<=sqrt(n);i++)
        {
            if (n%i==0) return false;
        }
    if (prime) return true;
}

int main ()
{
    int n;
    int k=0,a[10000]={0};
    cin>>n;
    while (n!=1)
        {
            for (int i=2;;)
                {
                    if (n%i==0 && prime(i)) {n/=i; a[k]=i;k++; }
                    else i++;
                    if (n==1) break;
                }
        }
    cout<<a[0];
    int s=1;
    while (a[s]!=0)
        {
            for (s=1;;s++)
                {
                    if (a[s]==0) break;
                    cout<<"*"<<a[s];
                }
        }
    return 0;
}
