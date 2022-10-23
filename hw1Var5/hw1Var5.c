#include<stdio.h>
#include<math.h>

int main() {

	int var1, var2;

	printf("input a,b: \n");
	scanf_s("%d,%d", &var1, &var2);

	printf("summ= %d\n", var1 + var2);
	printf("diff= %d\n", var1 - var2);
	printf("avgOfSquares= %.2f\n", 0.5 * (pow(var1, 2) + pow(var2, 2)));
	printf("diffOfAbs= %.2f\n", 0.5 * (abs(var1) + abs(var2)));
	printf("mod= %d\n", var1 % var2);

	system("pause");
	return 0;


}