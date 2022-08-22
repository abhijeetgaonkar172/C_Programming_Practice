//Incomplete
//52 - Write a program to calculate CRC of 32 bit data. (Don't use predefine functions)

#include <stdio.h>
#include <inttypes.h> // uint32_t, uint8_t
//32 bit number:- Decimal:4294967295 - Binary: 1111 1111 1111 1111 1111 1111 1111 1111

//function declaration
uint32_t CRC32();


void main(){
	int data_length = 32;
	//const uint32_t data = 4294967295;
	const uint32_t data = 0xffff;
	//printf("%d", sizeof(data));
	uint32_t crc32 =  CRC32(data, data_length);
	printf("\nCRC Value of %x is %x ",data, crc32);
	
}

uint32_t CRC32(const uint32_t data, int bit_length) {
	
	uint32_t crc32;
	//1Take the CRC polynomial and remove the most significant bit.
	uint32_t polynomial = 0x4C11DB7 ;//0xEDB88320 ;//0x4C11DB7, 1011
	int bit;
	//2.Append n zeros to the input.no need in soft
	
	//3.Remember the most significant bit.
	//performing an AND operation with a value that has a 1 as its most significant bit and a 0 in every other bit.
	uint32_t temp = 0x80000000;	//1000000000000000000000000000
	uint32_t remainder = data;
	
	for(bit = bit_length;bit>0; --bit)
	{
		if(remainder & temp)
		{
			printf("\nMSB is 1");	//1 -> perform and XOR operation with the remainder and the polynomial
			//printf("\n %x", remainder);
			
			//5. perform and XOR operation with the remainder and the polynomial
			remainder ^=  polynomial; 		
		}	
			//4.Discard the most significant bit.
			remainder = (remainder<<1);		//right shift by 1
	}
		return (remainder>>16);
}
