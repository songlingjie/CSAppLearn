#include "stdio.h"

int main(int argc, char const *argv[])
{
	int x = 0x89ABCDEF;

	printf("0x%.8X\n", x&0xFF);


	int y = 0x76543210;

	printf("0x%.8X\n", y&~0xFF);

	
	printf("0x%.8X\n", x&0xFF | y&~0xFF);
	return 0;
}