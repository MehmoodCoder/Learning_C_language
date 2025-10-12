#include <stdio.h>
#include <string.h>

int main()
{
     char encrypt[] = "Sidhu Moosewala ko meine mara ha";
     for (int i = 0; i < strlen(encrypt); i++)
     {
          encrypt[i] = encrypt[i] + 6;
     }
     printf("Message : %s\n", encrypt);

     int password;
     printf("Enter password to Encrypt Message : ");
     scanf("%d", &password);
     int code = 12344;

     if (password == code)
     {
          char decrypt[] = "Yojn{&Suuyk}grg&qu&skotk&sgxg&ng";
          for (int i = 0; i < strlen(decrypt); i++)
          {
               decrypt[i] = decrypt[i] - 6;
          }
          printf("Message : %s\n", decrypt);
     }
     else
     {
          printf("Wrong password \n");
     }

     return 0;
}
