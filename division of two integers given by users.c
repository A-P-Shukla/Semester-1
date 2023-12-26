#include <stdio.h>
int main() 
{   int a;
	int b;
	int q;
	int r;
	printf("\n Enter an integer:");
	scanf("%d",&a);
	printf("\n Enter an integer:");
	scanf("%d",&b);
	r=a%b;
	q=a/b;
	printf("\n  remainder of given integers is:%d",r);
	printf("\n quotiont of given integers is:%d",q);
	return 0;
}
