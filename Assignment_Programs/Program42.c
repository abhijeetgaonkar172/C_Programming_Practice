//complete
//42 - Write a C program to swap two nibbles in a byte?

#include <stdio.h>

//function declaration
int swapnibbles();
void print_bin();

void main(){
	unsigned int a;
	printf("Enter a Number:");
	scanf("%d",&a);
	printf("Decimal = %d\n",a);
	printf("\nBinary = ");
	print_bin(a);			//print binary number
	a = swapnibbles(a);		//call swapnibbles function, returns swapped nibble
	printf("\nSwapped Nibbles: ");
	print_bin(a);			//print binary number
}

//function to swap nibbles
int swapnibbles(unsigned int a){
	return (a>>4 & 0x0F)|(a<<4 & 0xF0);
}

//function to print binary values
void print_bin(unsigned int value)
{
	int i;
    for (i = sizeof(unsigned char) * 7; i >= 0; i--)		//unsigned char is 1 byte
        printf("%d", (value & (1 << i)) >> i );				//prints MSB to LSB, 1 bit at a time
}
