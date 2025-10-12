#include <stdio.h>

int main()
{
     char string[8];
     printf("Enter Any Word consisting less than 10 nletters : ");
     scanf("%s", string);
     printf("\n");
     int i = 0;
     while (string[i] != '\0')
     {
          int j = 0;
          while (j <= i)
          {
               printf("%c  ", string[j]);
               j++;
          }
          printf("\n");
          i++;
     }
     return 0;
}

//    Statement:

//    Write a program that takes a string (maximum length 10) as input and displays it in the form of a triangle.
//    For example, if the user enters "World", the output should be:

//    W
//    W o
//    W o r
//    W o r l
//    W o r l d