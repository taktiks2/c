#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;

	printf("argc=%d\n", argc);
	for (i = 0; i < argc; i++) {
		printf("argv[%d]=%s\n", i, argv[i]);
	}
	/* returnとexit()は同等なのですきな方を使えば良い */
	/* （同一プロジェクト内では統一すること） */
	exit(0);
}
