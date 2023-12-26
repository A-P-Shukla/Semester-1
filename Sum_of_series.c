#include<stdio.h>
int main()
{
int i,num,sum=1;
printf("Enter a odd number: ");
scanf("%d",&num);
for(i=1;i<=num;i++){
	sum= sum+i;
}
printf("Sum is : %d",sum);
return 0;
}
