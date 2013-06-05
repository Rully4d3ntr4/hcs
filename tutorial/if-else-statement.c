#include <stdio.h>	

int main()
{
    int age;
  
    printf( "Please enter your age: " );
    scanf( "%d", &age );
    if ( age <= 25 )
    {
        printf ("You are pretty young!\n" );
    }
    else if ( age >= 26 && age <= 49)
    {
        printf( "You are old\n" );       
    }
    else if ( age >= 50 )
    {
        printf( "You are really old\n" );
    }
  return 0;
}