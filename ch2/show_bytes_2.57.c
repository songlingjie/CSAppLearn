#include "stdio.h"

typedef unsigned char *byte_pointer;


void show_bytes(byte_pointer start, size_t len) {
	size_t i;

	for (int i = 0; i < len; i++)
	{
		printf("%.2x \n", start[i]);
	}
}

void show_int(int x) {
	show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
	show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
	show_bytes((byte_pointer) &x, sizeof(void *));
}

void show_long(long x) {
	show_bytes((byte_pointer) &x, sizeof(long));
}


int main()
{
	/* code */
	// show_int(123456);

	// show_float(123456);

	// unsigned char i = 255;
	// show_pointer(&i);

	long i = 1234567890;
	show_long(i);
}

