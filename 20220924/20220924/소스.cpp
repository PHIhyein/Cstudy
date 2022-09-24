
#include <stdio.h>
int main(void)
{
	double cm, bmi;
	int kg;
	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf_s("%d %lf", &kg, &cm);

	bmi = kg / (cm * cm);
	
	if (bmi >= 20.0 && bmi < 25.0) {
		printf("표준입니다.");
	}
	else {
		printf("체중관리가 필요합니다.");
	}
	return 0;
}