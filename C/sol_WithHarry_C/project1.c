#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
     srand(time(0));
     int randomNumber = (rand() % 100) + 1;
     int no_of_guesses = 0;
     int guessed;

     do
     {
          printf("Guess the number : ");
          scanf("%d", &guessed);
          printf("\n");
          if (guessed < randomNumber)
          {
               printf("Higher number please !\n\n");
          }
          else if (guessed > randomNumber)
          {
               printf("Lower number please !\n\n");
          }
          else
          {
               printf("Congrats!!\n\n");
          }

          no_of_guesses++;

     } while (randomNumber != guessed);

     printf("You guessed the number in %d guesses \n", no_of_guesses);

     return 0;
}