#include<stdio.h>
int main()
{
int n,i,a[n];
printf("Enter the number of elements of array:");
scanf("%d",&n);
printf("Enter %d elements:",n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("Entered elements of Array: ");
for(i=0;i<n;i++){
	printf("%d ",a[i]);
}
return 0;
}
