//decimal to binary
#include<stdio.h>
int main()
{
int n,rem,i=1;
long long bin=0;
printf("Enter the number:");
scanf("%d",&n);
while(n!=0){
	rem = n % 2;
	n /= 2;
	bin += rem * i;
	i *= 10;
}
printf("Binary Number is:%lld",bin);
return 0;
}
