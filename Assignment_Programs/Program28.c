//complete
//28 - Write a C program copy a data of file to other file.

#include <stdio.h>
#include <stdlib.h> // For exit()
#define MAXCHARSIZE 100
  
void main()
{
    FILE *fptr1, *fptr2;		//declare 2 file pointers
    char filename[MAXCHARSIZE], c;
  
    printf("Enter the filename to open for reading \n");
    scanf("%s", filename);
  
    // Open one file for reading
    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
  
    printf("Enter the filename to open for writing \n");
    scanf("%s", filename);
  
    // Open another file for writing
    fptr2 = fopen(filename, "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
  
    // Read contents from file
    c = fgetc(fptr1);		//using fgetc function to read one char at a time from the file
    while (c != EOF)
    {
        fputc(c, fptr2);	//using fputc function to add one char value of c to fptr2 
        c = fgetc(fptr1);	//After reading the character, the file pointer is advanced to next character.
    }
  
    printf("\nContents copied to %s", filename);
  
    fclose(fptr1);
    fclose(fptr2);
}
