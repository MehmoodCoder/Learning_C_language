//  output :

//  * * * * *
//  *       *
//  *       *
//  *       *
//  * * * * *


// 1.

#include <stdio.h>

int main()
{
     for (int i = 1; i <= 5; i++)
     {
          for (int j = 1; j <= 5; j++)
          {
               if (i == 1 || i == 5 || j == 1 || j == 5)
                    printf("*");
               else
                    printf(" ");
               printf("  ");
          }
          printf("\n");
     }
     return 0;
}

// // 2.

// #include <stdio.h>

// int main()
// {
//      char *rows[] = {
//          "*  *  *  *  *",
//          "*           *",
//          "*           *",
//          "*           *",
//          "*  *  *  *  *"};

//      for (int i = 0; i < 5; i++)
//      {
//           printf("%s\n", rows[i]);
//      }

//      return 0;
// }


// 3.


// #include <stdio.h>

// int main()
// {
//      int i, j;

//      for (j = 1; j <= 5; j++)
//      {
//           printf("*  ");
//      }
//      printf("\n");

//      for (i = 1; i <= 3; i++)
//      {
//           printf("*  ");
//           for (j = 1; j <= 3; j++)
//           {
//                printf("   ");
//           }
//           printf("*\n");
//      }

//      for (j = 1; j <= 5; j++)
//      {
//           printf("*  ");
//      }
//      printf("\n");

//      return 0;
// }
