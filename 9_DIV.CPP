#include<iostream.h>
#include<conio.h>
#define max 200
int prime[max];
void sieve(int n);
void div_3(int n);
void main()
{
clrscr();
int n;
cout<<"\n..... Programing for generating numbers with exactly 3 divisors.....";
cout<<"\n Enter N:";
//N: Max limit upto which numbers are to be generated
cin>>n;
div_3(n);
//sieve(n);
getch();
}
void sieve(int n)
{
prime[0]=prime[1]=1;
for(int i=2;i<=n;i++)
{
 if(prime[i]!=1)
 //query : it doesmt work on 0 prime[i]!=0 ???
    prime[i]=0;

    for(int p=i*2;p<=n;p+=i)
     prime[p]=1;
}
/*
for(i=0;i<=n;i++)
if(!prime[i])
cout<<" "<<i;
*/
}

void div_3(int n)
{
int i;
//generate all prime numbers first
sieve(n);

for(i=2;i*i<=n;i++)
{
if(!prime[i] )
{
cout<<i<<" ";
for(int j=i+1;i*i*j*j<=n;j++)
{
if(!prime[j])
{cout<<j<<" ";
cout<<i*i*j*j<<" "<<endl;
}
}

}

}
cout<<"end";
}