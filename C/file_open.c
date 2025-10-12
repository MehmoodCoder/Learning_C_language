#include <stdio.h>

int main()
{
     FILE *fptr;
     fptr = fopen("to_open_file.html", "r");
     if (fptr == NULL)
     {
          printf("file could not open\n");
          return 1;
     }
     else
     {
          printf(" File is successfully opened !\n\n");
          int ch;
          while ((ch = fgetc(fptr)) != EOF)
          {
               putchar(ch);
          }
          printf("\n");
          fclose(fptr);
     }

     return 0;
}