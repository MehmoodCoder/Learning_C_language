#include <stdio.h>

int main()
{
     int no;
     printf("Enter number to print table of this no. : ");
     scanf("%d", &no);
     for (int i = 1; i <= 10; i++)
     {
          int mul;
          mul = no * i;
          printf("%d x %d = %d \n", no, i, mul);
     }

     return 0;
}