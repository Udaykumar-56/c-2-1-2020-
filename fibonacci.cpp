#include<stdio.h>
 int main()
{
int n, i,s=0, a=0,b = 1;
printf("%d %d",a,b);
for( i = 1;i <=8;i++)
{
	s=a+b;
	printf("%d",s);
	a = b;
	b= s;
}
}
