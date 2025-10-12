#include <stdio.h>

int main()
{
     int bill, consumed_units, unit_price;
     char user_type;
     printf("Please enter h for home user and enter c for commercial user :  ");
     scanf("%c", &user_type);
     printf("Please enter the number of consumed units :  ");
     scanf("%d", &consumed_units);
     if (consumed_units <= 200)
     {
          if (user_type == 'h')
          {
               unit_price = 12;
          }
          else if (user_type == 'c')
          {
               unit_price = 15;
          }
     }
     else if (consumed_units > 200 && consumed_units <= 400)
     {
          if (user_type == 'h')
          {
               unit_price = 15;
          }
          else if (user_type == 'c')
          {
               unit_price = 20;
          }
     }

     else
     {
          if (user_type == 'h')
          {
               unit_price = 20;
          }
          else if (user_type == 'c')
          {
               unit_price = 24;
          }
     }
     bill = consumed_units * unit_price;
     printf("Your Electricity bill is %d \n", bill);

     return 0;
}