#include<stdio.h>
int main()
{
	int i, s = 0;
	int n;
	printf("Enter n ");
	scanf("%d",&n);
	for (i = 0; i <= n; i++) {
	
		s += i;
	}
	printf("Sum = %d \n", s);
	float average=(float)s/n;
	printf("average = %f \n", average);
	return 0;
}

