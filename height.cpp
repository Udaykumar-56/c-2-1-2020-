#include<stdio.h>
int main()
{
	int h;
	printf("enter height of the person:");
	scanf("%d",&h);
	if(h>150)
	{
		if(h < 165)
		printf("average height");
		else if(h < 190)
		printf("tall");
		else
		printf("abnormal height");
		
	}
else
{
	printf("Dwarf");
}
}
