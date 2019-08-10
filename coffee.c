#include<stdio.h>
#include<stdlib.h>
int main()
{
int x,p;
scanf("%d%d",&x,&p);
int sum=0;

while(x>0)
{
  sum=sum+x;
  p=100-p
  x=int((p*x)/100);
  p=100+p
 }

printf(sum);
}
