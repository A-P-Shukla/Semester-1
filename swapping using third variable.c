#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("\n Enter an integer:");
	scanf("%d",&a);
	printf("\n Enter an integer:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\n Swapped integers:%d",a);
	printf("\n Swapped integers:%d",b);
	return (0);
}
