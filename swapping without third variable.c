#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("\n Enter an integer:");
	scanf("%d",&a);
	printf("\n Enter an integer:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n Swapped integers:%d",a);
	printf("\n Swapped integers:%d",b);
	return (0);
}
