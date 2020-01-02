#include<stdio.h>
int main()
{
int n,i,c=0;
printf("enter a number");
scanf("%d",&n);
while(n>0)
{
	c = c*10 + n%10;
n=n/10;
}
printf("sum of digits=%d",c);
}

