#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{

	char f[20] = "strawberry";

	printf("%s\n", f);
	strcpy(f, "banana");
	printf("%s\n", f);


	return 0;
}