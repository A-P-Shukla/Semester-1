#include<stdio.h>
main()
{
	int integerType;
	char charType;
	float floatType;
	double doubleType;
	printf("Size of integer is:%ld",sizeof(integerType));
	printf("\n Size of character is:%ld",sizeof(charType));
	printf("\n Size of float is:%ld",sizeof(floatType));
	printf("\n Size of double is:%ld",sizeof(doubleType));
	return 0;
}
