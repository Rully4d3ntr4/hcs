#include <stdio.h>

int main()
{
   char str1[50];

   printf("This won't let you to input space character!\n");
   printf("Enter your name (max 50 characters): ");
   scanf("%s", &str1);

   printf("Hello %s!\n", str1);
   
   return(0);
}