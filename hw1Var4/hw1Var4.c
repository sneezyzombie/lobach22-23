#include <stdio.h>
#include<math.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "rus");

	float side;

	printf("input side of cube: \n");
	scanf_s("%f", &side);

	printf("V= %.0f\n", pow(side, 3));
	printf("Sпов= %.0f\n", 6 * pow(side, 2));
	printf("Sбок= %.0f\n", 4 * pow(side, 2));

	system("pause");
	return 0;

}