#include <stdio.h>

float Avg(int, int, int);
int main()
{
     int n1, n2, n3;
     printf("Enter first number : ");
     scanf("%d", &n1);
     printf("Enter second number : ");
     scanf("%d", &n2);
     printf("Enter third number : ");
     scanf("%d", &n3);
     printf("The average of three numbers are %.1lf\n", Avg(n1, n2, n3));
     return 0;
}

float Avg(int a, int b, int c)
{
     return (a + b + c) / 3.0;
}