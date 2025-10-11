#include <stdio.h>
#include "calc.h"

int main()
{
     int n1, n2, choice;
     printf("Enter first number : ");
     scanf("%d", &n1);
     printf("Enter second number : ");
     scanf("%d", &n2);
     printf("Enter choice : \n1 for addition \n2 for subtraction \n3 for multiplication \n4 for division\n");
     printf("Enter your choice : ");
     scanf("%d", &choice);
     if (choice == 1)
     {
          printf("%d + %d = %d\n", n1, n2, addition(n1, n2));
     }
     else if (choice == 2)
     {
          printf("%d + %d = %d\n", n1, n2, subtraction(n1, n2));
     }
     else if (choice == 3)
     {
          printf("%d x %d = %d\n", n1, n2, multiplication(n1, n2));
     }
     else if (choice == 4)
     {
          if (n2 == 0 || n1 == 0)
          {
               printf("Error: please enter valid value\n");
          }
          else
          {
               printf("%.1f / %d = %.1f\n", (float)n1, n2, division(n1, n2));
          }
     }
     else
     {
          printf("No valid choice entered\n");
     }
     return 0;
}