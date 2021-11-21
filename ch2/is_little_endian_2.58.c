#include "stdio.h"

int is_little_endian() {
	 short i = 1;
	 short *p = &i;
	 return p[0] == 01;
}

int main(int argc, char const *argv[])
{
	printf("%d\n", is_little_endian());
	return 0;
}