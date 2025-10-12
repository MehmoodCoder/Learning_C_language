#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
     int win = 0, draw = 0, lose = 0;

     printf("\n          === Welcome to Rock, Paper, Scissors! ===\n\n");
     printf("Rules:                                         Winner Selection:\n");
     printf("  Rock     (0) beats Scissors (2)                 3 Wins = Champion \n");
     printf("  Paper    (1) beats Rock     (0)                 3 Losses = Loser\n");
     printf("  Scissors (2) beats Paper    (1)                 Wins = Losses = Draw\n");
     printf("  Same choice = Draw                              Wins > Losses = Win\n\n");

     printf("Play 5 rounds against the computer.\n\n");
     printf("Choose:\n");
     printf("  0 for Rock\n");
     printf("  1 for Paper\n");
     printf("  2 for Scissors\n\n");

     srand(time(0));

     for (int i = 0; i < 5; i++)
     {
          int player, computer = rand() % 3;

          printf("Enter your choice : ");

          if (scanf("%d", &player) != 1)
          {
               printf("Invalid input! Please enter 0, 1, or 2.\n");
               while (getchar() != '\n')
                    ;
               i--;
               continue;
          }

          if (player < 0 || player > 2)
          {
               printf("Invalid choice! Please enter 0, 1, or 2.\n");
               i--;
               continue;
          }

          printf("Computer choose %d\n", computer);
          printf("You choose %d\n", player);

          if (player == computer)
          {
               printf("It's a Draw!\n\n");
               draw++;
          }
          else if ((player == 0 && computer == 2) ||
                   (player == 1 && computer == 0) ||
                   (player == 2 && computer == 1))
          {
               printf("You Win!\n\n");
               win++;
          }
          else
          {
               printf("You Lose!\n\n");
               lose++;
          }
     }

     printf("\n--- Final Score ---\n\n");
     printf("     Lose : %d\n", lose);
     printf("     Win  : %d\n", win);
     printf("     Draw : %d\n\n", draw);

     if (win + lose + draw != 5)
     {
          printf("Error: Invalid game data! Scores do not add up to 5 rounds.\n");
          return 1;
     }

     if (win >= 3 && win > lose)
     {
          printf("You win this game\n\n");
     }
     else if (lose >= 3 && lose > win)
     {
          printf("You lose this game\n\n");
     }
     else if (draw == 5 || (draw == 4 && (lose <= 1 || win <= 1)))
     {
          printf("This game is a draw\n\n");
     }
     else if (win > lose)
     {
          printf("You win this game\n\n");
     }
     else if (lose > win)
     {
          printf("You lose this game\n\n");
     }
     else
     {
          printf("This game is a draw\n\n");
     }

     return 0;
}
// code save to chatgpt name : rock_paper_scissors.c