#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	char c;
	float f;
	printf("\n Enter an integer:");
	scanf("%d",&a);
	printf("\n Enter a character");
	fflush(stdin);
	scanf("%c",&c);
	printf("\n Enter float:");
	scanf("%f",&f);
	printf("Integer is %d\n character is %c\n float is %f\n",a,c,f);
	return (0);
}
