#include <stdio.h>

int main() {

	int amountOfNums, num, sumOfSqrs, counter;
	counter = 0;
	sumOfSqrs = 0;

	printf("input amount of nums: ");
	scanf_s("%d", &amountOfNums);
	system("cls");

	while (counter < amountOfNums)
	{
		printf("input num: ");
		scanf_s("%d", &num);

		sumOfSqrs += num * num;

		counter++;
	}

	printf("sum of sqrs = %d\n", sumOfSqrs);

	system("pause");
	return 0;

}