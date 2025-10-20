#include <stdio.h>
int main()
{
     int sum = 0;
     for (int i = 1; i < 10; i += 2)
     {
          printf("%d\n", i);
          sum += i;
     }
     printf("Sum of even numbers is : %d\n", sum);
}