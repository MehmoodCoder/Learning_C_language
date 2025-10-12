#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

int getMenuChoice()
{
     char buf[32];
     while (1)
     {
          printf("\nEnter:\n\n");
          printf("1 - Add Student\n");
          printf("2 - View All Students\n");
          printf("3 - Search Student\n");
          printf("4 - Update Student\n");
          printf("5 - Delete Student\n");
          printf("6 - Exit\n\n");
          printf("Enter your choice: ");

          if (!fgets(buf, sizeof(buf), stdin))
               continue;
          buf[strcspn(buf, "\n")] = '\0';
          printf("\n");

          int i = 0;
          while (buf[i] && isspace((unsigned char)buf[i]))
               i++;
          if (!buf[i])
          {
               printf("Invalid choice! Enter 1-6 only.\n\n");
               continue;
          }

          int ok = 1;
          for (int j = i; buf[j]; j++)
          {
               if (!isdigit((unsigned char)buf[j]))
               {
                    ok = 0;
                    break;
               }
          }
          if (!ok)
          {
               printf("Invalid choice! Enter digits 1-6 only.\n\n");
               continue;
          }

          long val = strtol(buf + i, NULL, 10);
          if (val < 1 || val > 6)
          {
               printf("Invalid choice! Enter 1-6 only.\n\n");
               continue;
          }

          return (int)val;
     }
}

int isValidName(char name[])
{
     int len = strlen(name);
     if (len < 3)
          return 0;

     int onlySpaces = 1;
     for (int i = 0; name[i] != '\0'; i++)
     {
          if (!isalpha((unsigned char)name[i]) && name[i] != ' ')
               return 0;

          if (isalpha((unsigned char)name[i]))
               onlySpaces = 0;
     }
     if (onlySpaces)
          return 0;

     return 1;
}

int isValidRoll(char roll[])
{
     int len = strlen(roll);
     if (len == 7)
          return 0;

     for (int i = 0; roll[i] != '\0'; i++)
     {
          if (!isdigit((unsigned char)roll[i]))
               return 0;
     }

     int num = atoi(roll);
     if (num <= 0)
          return 0;

     return 1;
}

int isValidAge(char age[])
{
     int len = strlen(age);
     if (len == 0 || len > 2)
          return 0;

     for (int i = 0; age[i] != '\0'; i++)
     {
          if (!isdigit((unsigned char)age[i]))
               return 0;
     }

     int num = atoi(age);
     if (num < 3)
          return 0;

     return 1;
}

int isValidMarks(char marks[])
{
     int len = strlen(marks);
     if (len < 2 || len > 4)
          return 0;

     if (marks[len - 1] != '%')
          return 0;

     for (int i = 0; i < len - 1; i++)
     {
          if (!isdigit((unsigned char)marks[i]))
               return 0;
     }

     int num = atoi(marks);
     if (num < 1 || num > 100)
          return 0;

     return 1;
}