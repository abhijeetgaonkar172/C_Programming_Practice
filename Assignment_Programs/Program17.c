//complete
#include <stdio.h>  
  
void main ()  
{  
    char lwr[50]; // declare character array  
      
    printf (" Enter the lower case string: ");  
    gets (lwr); // use gets() function to take string  
      
    // use strupr() function to change lower case into upper string   
    printf (" \n The uppercase string is: %s", strupr(lwr));
}  
