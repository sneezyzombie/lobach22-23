#include <stdio.h>

int main() {

	int inputedVar;

	printf("input number: ");
	scanf_s("%d", &inputedVar);

	printf("1: %d\n", inputedVar);
	printf("2: %d\n", inputedVar + 1);
	printf("3: %d\n", inputedVar + 2);

	system("pause");
	return 0;

}