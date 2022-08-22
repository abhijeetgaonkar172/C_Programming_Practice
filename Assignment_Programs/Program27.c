//complete
//27 - Write a C program to copy file from location to other location.

#include <stdio.h>
#include <stdlib.h> // For exit()
#include <string.h>
#define MAXCHARSIZE 100
  
  
void main()
{
    FILE *fptr1, *fptr2;		//declare 2 file pointers
    char filename[MAXCHARSIZE], c;
    char directory1[MAXCHARSIZE] = "D:\\", directory2[MAXCHARSIZE];	//declare directorys
  
    printf("Enter the filename to open for reading \n");
    scanf("%s", filename);
  	strcat(directory1,filename);		//concatenate directory1 with filename
    // Open one file for reading
    fptr1 = fopen(directory1, "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", directory1);
        exit(0);
    }
  
    printf("Enter the directory where you want to copy file \n");
    scanf("%s", directory2);
	strcat(directory2,filename);  		//concatenate directory2 with filename
	
    // Open another file for writing with same name at directory 2
    fptr2 = fopen(directory2, "w");	
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n", directory2);
        exit(0);
    }
  
    // Read contents from file
    c = fgetc(fptr1);		//using fgetc function to read one char at a time from the file
    while (c != EOF)
    {
        fputc(c, fptr2);	//using fputc function to add one char value of c to fptr2 
        c = fgetc(fptr1);	//After reading the character, the file pointer is advanced to next character.
    }
  
    printf("\nFile copied to %s", directory2);
  
    fclose(fptr1);
    fclose(fptr2);
}
