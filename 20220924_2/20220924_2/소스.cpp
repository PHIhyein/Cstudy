#include <stdio.h>
int main(void) {
	int chest;
	scanf_s("%d", &chest);
	char size;

	if (chest <= 90){
		size = 'S';
	}else if (chest <= 100) {
		size = 'M';
	}else {
		size = 'L';
	}
	printf("%c", size);
	return 0;
}