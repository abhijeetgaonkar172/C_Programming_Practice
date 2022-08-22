//complete
#include<stdio.h>
#include<string.h>

void main()
{
    char a[20],b[20];
    int i=0;
    printf("Enter a String: ");
    gets(b);				//take string input in b
    strcpy(a,strlwr(b));	//convert string to lowercase
    while(a[i]!='\0')		//run until null character appears
    {
        if(a[i]>97 && a[i]<122)	//if number is between 97(a) to 122(z)
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'|| a[i]=='u')
                printf("%c",a[i]);
        }
        else
            printf("not a string");
            break;
        i++;
    }
}
