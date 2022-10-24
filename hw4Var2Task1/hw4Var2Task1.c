#include<stdio.h>
#include<malloc.h>

int main() {

	int amountOfNum;
	printf("input amount of numbers ");
	scanf_s("%d", &amountOfNum);

	int* arr;
	arr = (int*)malloc(sizeof(int) * amountOfNum);

	for (int i = 0; i < amountOfNum; i++) {
		printf("input num ");

		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < amountOfNum; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	int localeMin = 0;

	for (int i = 1; i < amountOfNum - 1; i++) {
		if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
			localeMin++;
		}
	}

	//if (arr[0] < arr[1]) {
	//	localeMin++;
	//}
	//if (arr[amountOfNum] < arr[amountOfNum - 1]) {
	//	localeMin++;
	//}

	printf("amount of locale min %d\n", localeMin);
	system("pause");
	return 0;

}