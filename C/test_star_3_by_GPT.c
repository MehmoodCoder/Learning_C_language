// output :

//     *
//    ***
//   *****
//  *******
// *********

#include <stdio.h>
int main()
{
     for (int i = 1; i <= 5; i = i + 1)
     {
          for (int k = i; k <= 5; k++)
          {
               printf(" ");
          }
          for (int j = 1; j <= (i*2-1); j++)
          {
               printf("*");
          }
          printf("\n");
     }

     return 0;
}