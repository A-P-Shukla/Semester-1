//perfect number
#include<stdio.h>
int main()
{
int number,sum=0,rem,i;
printf("Enter the number");
scanf("%d",&number);
 for (i = 1; i <number; i++)
    {
        rem = number % i;
	if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == number)
        printf("%d is perfect number", number);
    else
        printf("%d is not a perfect number", number);
return 0;
}
