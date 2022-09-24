#include <stdio.h>
double cm_to_m(int x);

int main() {
	double res;

	res = cm_to_m(187);
	printf("%.2lfm \n", res);

	return 0;
}

double cm_to_m(int x) {
	double n;
	n = x / 100.0;

	return n;
}