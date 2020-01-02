#include<stdio.h>
int main()
{
	int a,b,op;
	scanf("%d %d",&a,&b);
	printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
	printf("enter your choice");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			printf("sum = %d",a+b);
			break;
		case 2:
			printf("differnce = %d",a-b);
			break;
		case 3:
			printf("product = %d",a*b);
			break;
		case 4:
			printf("division = %d",a/b);
			break;
	}
}
