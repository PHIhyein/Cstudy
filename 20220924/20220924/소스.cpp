
#include <stdio.h>
int main(void)
{
	double cm, bmi;
	int kg;
	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf_s("%d %lf", &kg, &cm);

	bmi = kg / (cm * cm);
	
	if (bmi >= 20.0 && bmi < 25.0) {
		printf("ǥ���Դϴ�.");
	}
	else {
		printf("ü�߰����� �ʿ��մϴ�.");
	}
	return 0;
}