#include<stdio.h>
int main()
{
	int h;
	printf("enter a number \h");
	scanf("%d",&h);
	if(h % 3 == 0)
	{
		if(h % 5 == 0)
		printf("FIZZBIZZ");
		else
		printf("FIZZ");
	}
	else if(h % 5 == 0)
	printf("BIZZ");
	else
	printf("%d",h);
	}

