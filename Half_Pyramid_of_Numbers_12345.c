//Half_pyramid_of_numbers_1 23 345
#include<stdio.h>
int main() {
   int i, j,c=1, rows;
   printf("Enter number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", c);
         c++;
      }
      printf("\n");
   }
   return 0;
}
