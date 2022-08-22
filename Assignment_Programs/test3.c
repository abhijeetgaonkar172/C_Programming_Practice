//6- Write a C program to store Name and 10 digits mobile number of 20 users (Use 3 dimentional character array)

#include <stdio.h>

#define USERARRAYSIZE 20
#define NAMEARRAYSIZE 2//20
#define MOBNOARRAYSIZE 20//10

#include <stdio.h>
void main()
{
	int i,j;
	char s1[20] = "Abhi"; char s2[20] = "Raja";
	char test[USERARRAYSIZE][NAMEARRAYSIZE];
	
	printf("\nEnter Employee Details of 20 users: \n");
	for (i = 0; i < USERARRAYSIZE ; ++i)
	{
		for (j = 0; j < NAMEARRAYSIZE-1; ++j)
		{
	    	scanf("%s %s", &test[i][j], &test[i][j+1]);
		}
	}
	
	// Printing values with the proper index.

  	printf("\nDisplaying values:\n");
	printf("\nName \t\t Mobile Number");
	for (i = 0; i < USERARRAYSIZE ; ++i)
	{
		printf("\n i = %d",i);
		for (j = 0; j < NAMEARRAYSIZE-1; ++j)
		{
			printf("\n j = %d",j);
	    	printf("%s %s", test[i][j], test[i][j+1]);
		}
	}
}

/*
#include <stdio.h>
void main()
{
	int i,j,k;
  char test[USERARRAYSIZE][NAMEARRAYSIZE][MOBNOARRAYSIZE];

  printf("Enter 12 values: \n");

  for (i = 0; i < USERARRAYSIZE ; ++i)
  {
    for (j = 0; j < NAMEARRAYSIZE; ++j)
    {
      for (k = 0; k < MOBNOARRAYSIZE; ++k)
      {
        scanf("%s", &test[i][j][k]);
      }
    }
  }

  // Printing values with the proper index.

  printf("\nDisplaying values:\n");
  for (i = 0; i < 2; ++i)
  {
    for (j = 0; j < 3; ++j)
    {
      for (k = 0; k < 2; ++k)
      {
        printf("test[%d][%d][%d] = %s\n", i, j, k, test[i][j][k]);
      }
    }
  }

}*/
/*
#include <stdio.h>
int main()
{
	int i,j,k;
  char test[2][3][2];

  printf("Enter 12 values: \n");

  for (i = 0; i < 2; ++i)
  {
    for (j = 0; j < 3; ++j)
    {
      for (k = 0; k < 2; ++k)
      {
        scanf("%s", &test[i][j][k]);
      }
    }
  }

  // Printing values with the proper index.

  printf("\nDisplaying values:\n");
  for (i = 0; i < 2; ++i)
  {
    for (j = 0; j < 3; ++j)
    {
      for (k = 0; k < 2; ++k)
      {
        printf("test[%d][%d][%d] = %s\n", i, j, k, test[i][j][k]);
      }
    }
  }

  return 0;
}
*/

