#include <stdio.h>

int
main()
{
	long num = 1;
	int by = 4;
	int bi = 8;

	for (int i = 0; i < (by * bi); i++) {
		num *= 2;
		printf("%ld\n", num);
	}
}
