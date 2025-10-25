// 1.

// # include<stdio.h>
// int main(){
//      for (int i = 5; i >= 1; i--)
//      {
//           for (int j = 1; j <= i; j++)
//           {
//                if (i == 5 && j == 1)
//                {
//                     printf("");
//                }
//                else if (i == 4 && j == 1)
//                {
//                     printf(" ");
//                }
//                else if (i == 3 && j == 1)
//                {
//                     printf("  ");
//                }
//                else if (i == 2 && j == 1)
//                {
//                     printf("   ");
//                }
//                else if (i == 1 && j == 1)
//                {
//                     printf("    ");
//                }
//                printf("*");
//           }
//           printf("\n");
//      }

//      return 0;
// }

// 2.

# include<stdio.h>
int main(){
     for (int i = 5; i >= 1; i--)
     {
          for (int j = 1; j <= 5-i; j++)
          {
               printf(" ");
          }
          for (int k = 1; k <= i; k++)
          {
               printf("*");
          }
          printf("\n");
     }

     return 0;
}

// // output :

// // *****
// //  ****
// //   ***
// //    **
// //     *