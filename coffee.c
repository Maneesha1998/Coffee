#include<stdio.h>
#include<stdlib.h>
int main()
{
int x,p;
scanf("%d%d",&x,&p);
int sum=0;
p=100-p
while(x>0)
{
  sum=sum+x;
  
  x=int((p*x)/100);
  
 }

printf(sum);
}
