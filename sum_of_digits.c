#include<stdio.h>
int main()
{
int num, originalNum, remainder, result = 0;
    printf("Enter a integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
       result += remainder;
       originalNum /= 10;
    }
printf("Sum of digits is:%d",result);
return 0;
}

