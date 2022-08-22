#include <stdio.h>  
  
void main ()  
{  
    char upr[50]; // declare character array  
      
    printf (" Enter the upper case string: ");  
    gets (upr); // use gets() function to take string  
      
      
    // use strlwr() function to change upper case into lower string   
    printf (" \n The lowercase string is: %s", strlwr(upr));    
}  
