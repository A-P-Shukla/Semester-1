//binary_to_decimal
#include<stdio.h>
#include<math.h>
int main()
{
int n=0,i=0;
long long bin;
printf("Enter the number:");
scanf("%lld",&bin);
while(bin!=0){
	n+=(bin%10)*pow(2,i);
	i++;
	bin/=10;
}
printf("Decimal Number is:%d",n);
return 0;
}
