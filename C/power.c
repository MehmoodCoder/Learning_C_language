#include <stdio.h>

int pow_function(int, int);

int main()
{
     int num, exponent, pow1;
     printf("enter base : ");
     scanf("%d", &num);
     printf("enter exponent : ");
     scanf("%d", &exponent);
     pow1 = pow_function(num, exponent);
     printf("The answer is %d\n", pow1);
     return 0;
}

int pow_function(int base, int expo)
{
     int pow = 1;
     for (int i = 1; i <= expo; i++)
     {
          pow = pow * base;
     }
     return pow;
}
// pass by pointer or other types to pass value to fun