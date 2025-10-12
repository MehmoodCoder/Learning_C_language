#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int getMenuChoice();
int isValidRoll(char roll[]);
int isValidName(char name[]);
int isValidAge(char age[]);
int isValidMarks(char marks[]);

struct Student
{
     int age;
     char roll_no[50];
     char name[30];
     char marks[10];
};

int main()
{
     struct Student s1;
     int choice;
     int found = 0;
     while (1)
     {
          choice = getMenuChoice();

          switch (choice)
          {
          case 1:
               printf("Adding a new student...\n\n");
               if (choice == 1)
               {
                    while (1)
                    {
                         printf("Enter your Roll Number : ");
                         fgets(s1.roll_no, sizeof(s1.roll_no), stdin);
                         s1.roll_no[strcspn(s1.roll_no, "\n")] = '\0';
                         printf("\n");

                         if (isValidRoll(s1.roll_no))
                              break;
                         else
                              printf("Invalid Roll Number! Only allowed 6 digits number.\n\n");
                    }
                    while (1)
                    {
                         printf("Enter your name : ");
                         fgets(s1.name, sizeof(s1.name), stdin);
                         s1.name[strcspn(s1.name, "\n")] = '\0';
                         printf("\n");

                         if (isValidName(s1.name))
                              break;
                         else
                              printf("Invalid name! Only letters (min 3) and spaces allowed.\n\n");
                    }
                    char ageStr[20];
                    while (1)
                    {
                         printf("Enter your age : ");
                         fgets(ageStr, sizeof(ageStr), stdin);
                         ageStr[strcspn(ageStr, "\n")] = '\0';
                         printf("\n");

                         if (isValidAge(ageStr))
                         {
                              s1.age = atoi(ageStr);
                              break;
                         }
                         else
                         {
                              printf("Invalid Age! Only digits allowed, no spaces, min age 3.\n\n");
                         }
                    }
                    while (1)
                    {
                         printf("Enter your marks (in percentage with %% symbol): ");
                         fgets(s1.marks, sizeof(s1.marks), stdin);
                         s1.marks[strcspn(s1.marks, "\n")] = '\0';
                         printf("\n");

                         if (isValidMarks(s1.marks))
                              break;
                         else
                              printf("Invalid Marks! Enter only 1 to 100 with %% at the end (e.g., 75%%).\n\n");
                    }

                    FILE *fptr;
                    fptr = fopen("Project:StudentManagementSystem/Project_Files/database.txt", "a");
                    if (fptr == NULL)
                    {
                         printf("Error opening file.\n\n");
                         return 1;
                    }
                    else
                    {
                         printf("Your data saved in Database\n\n");
                         fprintf(fptr, "Student Roll Number is %s\n", s1.roll_no);
                         fprintf(fptr, "Student Name is %s\n", s1.name);
                         fprintf(fptr, "Student Age is %d\n", s1.age);
                         fprintf(fptr, "Student Marks is %s\n\n", s1.marks);
                    }
                    fclose(fptr);
               }
               break;
          case 2:
               printf("Viewing all students...\n\n");
               FILE *fptr;
               char line[200];

               fptr = fopen("Project:StudentManagementSystem/Project_Files/database.txt", "r");
               if (fptr == NULL)
               {
                    printf("No data found. Database is empty.\n\n");
               }
               else
               {
                    printf("---- Student Records ----\n\n");
                    while (fgets(line, sizeof(line), fptr))
                    {
                         printf("%s", line);
                    }
                    printf("-------------------------\n\n");
                    fclose(fptr);
               }
               break;
          case 3:
               printf("Searching for a student...\n\n");
               while (1)
               {
                    printf("Enter Roll Number to search: ");
                    fgets(s1.roll_no, sizeof(s1.roll_no), stdin);
                    s1.roll_no[strcspn(s1.roll_no, "\n")] = '\0';
                    printf("\n");

                    if (isValidRoll(s1.roll_no))
                         break;
                    else
                         printf("Invalid Roll Number! Only allowed 6 digits number.\n\n");
               }

               fptr = fopen("Project:StudentManagementSystem/Project_Files/database.txt", "r");
               int found = 0;

               if (fptr == NULL)
               {
                    printf("No data found. Database is empty.\n\n");
               }
               else
               {
                    while (fgets(line, sizeof(line), fptr))
                    {
                         if (strstr(line, s1.roll_no))
                         {
                              printf("Record Found:\n\n");
                              printf("%s", line);

                              for (int i = 0; i < 3; i++)
                              {
                                   if (fgets(line, sizeof(line), fptr))
                                        printf("%s", line);
                              }

                              found = 1;
                              break;
                         }
                    }

                    fclose(fptr);

                    if (!found)
                         printf("Record Not Found.\n\n");
               }
               break;
          case 4:
               printf("Updating student info...\n\n");

               while (1)
               {
                    printf("Enter Roll Number to search: ");
                    fgets(s1.roll_no, sizeof(s1.roll_no), stdin);
                    s1.roll_no[strcspn(s1.roll_no, "\n")] = '\0';
                    printf("\n");
                    if (isValidRoll(s1.roll_no))
                         break;
                    else
                         printf("Invalid Roll Number! Only allowed 6 digits number.\n\n");
               }

               char searchRoll[50];
               strcpy(searchRoll, s1.roll_no);

               fptr = fopen("Project:StudentManagementSystem/Project_Files/database.txt", "r");
               if (fptr == NULL)
               {
                    printf("No data found. Database is empty.\n\n");
               }
               else
               {
                    FILE *file = fopen("Project:StudentManagementSystem/Project_Files/temp.txt", "w");
                    if (file == NULL)
                    {
                         printf("Error opening file.\n\n");
                         return 1;
                    }

                    printf("Searching in database...\n\n");
                    found = 0;

                    while (fgets(line, sizeof(line), fptr))
                    {
                         if (!found && strstr(line, searchRoll))
                         {
                              printf("Record Found:\n\n");

                              while (1)
                              {
                                   printf("Enter new Roll Number : ");
                                   fgets(s1.roll_no, sizeof(s1.roll_no), stdin);
                                   s1.roll_no[strcspn(s1.roll_no, "\n")] = '\0';
                                   printf("\n");
                                   if (isValidRoll(s1.roll_no))
                                        break;
                                   else
                                        printf("Invalid Roll Number! Only allowed 6 digits number.\n\n");
                              }

                              while (1)
                              {
                                   printf("Enter new Name : ");
                                   fgets(s1.name, sizeof(s1.name), stdin);
                                   s1.name[strcspn(s1.name, "\n")] = '\0';
                                   printf("\n");
                                   if (isValidName(s1.name))
                                        break;
                                   else
                                        printf("Invalid name! Only letters (min 3) and spaces allowed.\n\n");
                              }

                              char ageStr[20];
                              while (1)
                              {
                                   printf("Enter new Age : ");
                                   fgets(ageStr, sizeof(ageStr), stdin);
                                   ageStr[strcspn(ageStr, "\n")] = '\0';
                                   printf("\n");
                                   if (isValidAge(ageStr))
                                   {
                                        s1.age = atoi(ageStr);
                                        break;
                                   }
                                   else
                                        printf("Invalid Age! Only digits allowed, no spaces, min age 3.\n\n");
                              }

                              while (1)
                              {
                                   printf("Enter new Marks (in percentage with %% symbol): ");
                                   fgets(s1.marks, sizeof(s1.marks), stdin);
                                   s1.marks[strcspn(s1.marks, "\n")] = '\0';
                                   printf("\n");
                                   if (isValidMarks(s1.marks))
                                        break;
                                   else
                                        printf("Invalid Marks! Enter only 1 to 100 with %% at the end (e.g., 75%%).\n\n");
                              }

                              fprintf(file, "Student Roll Number is %s\n", s1.roll_no);
                              fprintf(file, "Student Name is %s\n", s1.name);
                              fprintf(file, "Student Age is %d\n", s1.age);
                              fprintf(file, "Student Marks is %s\n", s1.marks);

                              for (int skip = 0; skip < 3; skip++)
                                   fgets(line, sizeof(line), fptr);

                              found = 1;
                         }
                         else
                         {
                              fputs(line, file);
                         }
                    }

                    fclose(fptr);
                    fclose(file);

                    if (found)
                    {
                         remove("Project:StudentManagementSystem/Project_Files/database.txt");
                         rename("Project:StudentManagementSystem/Project_Files/temp.txt", "Project:StudentManagementSystem/Project_Files/database.txt");
                         printf("Record updated successfully!\n\n");
                    }
                    else
                    {
                         printf("Record Not Found.\n\n");
                         remove("Project:StudentManagementSystem/Project_Files/temp.txt");
                    }
               }
               break;
          case 5:
               printf("Deleting a student...\n\n");
               while (1)
               {
                    printf("Enter Roll Number to search: ");
                    fgets(s1.roll_no, sizeof(s1.roll_no), stdin);
                    s1.roll_no[strcspn(s1.roll_no, "\n")] = '\0';
                    printf("\n");
                    if (isValidRoll(s1.roll_no))
                         break;
                    else
                         printf("Invalid Roll Number! Only allowed 6 digits number.\n\n");
               }

               char searchRoll1[50];
               strcpy(searchRoll, s1.roll_no);

               fptr = fopen("Project:StudentManagementSystem/Project_Files/database.txt", "r");
               if (fptr == NULL)
               {
                    printf("No data found. Database is empty.\n\n");
               }
               else
               {
                    FILE *file = fopen("Project:StudentManagementSystem/Project_Files/temp.txt", "w");
                    if (file == NULL)
                    {
                         printf("Error opening file.\n\n");
                         return 1;
                    }

                    printf("Searching in database...\n\n");
                    found = 0;

                    while (fgets(line, sizeof(line), fptr))
                    {
                         if (!found && strstr(line, searchRoll))
                         {
                              printf("Record Found:\n\n");

                              for (int skip = 0; skip < 4; skip++)
                                   fgets(line, sizeof(line), fptr);

                              found = 1;
                         }
                         else
                         {
                              fputs(line, file);
                         }
                    }

                    fclose(fptr);
                    fclose(file);

                    if (found)
                    {
                         remove("Project:StudentManagementSystem/Project_Files/database.txt");
                         rename("Project:StudentManagementSystem/Project_Files/temp.txt", "Project:StudentManagementSystem/Project_Files/database.txt");
                         printf("Record deleted successfully!\n\n");
                    }
                    else
                    {
                         printf("Record Not Found.\n\n");
                         remove("Project:StudentManagementSystem/Project_Files/temp.txt");
                    }
               }
               break;
          case 6:
               printf("Exiting program. Goodbye!\n\n");
               exit(0);
               break;
          default:
               printf("Invalid choice! Please try again.\n");
               return 0;
          }
     }

     return 0;
}