#include<stdio.h>

int main(){
     int factorial = 1,n;
     printf("Enter any number = ");
     scanf("%d",&n);
     for (int i = 1; i <= n; i++)
     {
          factorial*=i;
     }
     printf("Factorial of %d is %d \n",n,factorial);
     
     return 0;
}