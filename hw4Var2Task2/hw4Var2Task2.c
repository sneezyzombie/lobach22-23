#include<stdio.h>
#include<malloc.h>

int foundAmountOfLocaleMaxs(int* arr, int amountOfNum) {

	int amountOfLocaleMaxs = 0;
	for (int i = 1; i < amountOfNum - 1; i++) {
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
			amountOfLocaleMaxs++;
		}
	}

	return amountOfLocaleMaxs;
}
void foundLocaleMaxs(int* arr, int amountOfLocaleMaxs, int amountOfNum) {

	int* arrayOfLocaleMaxs;
	arrayOfLocaleMaxs = (int*)malloc(sizeof(int) * amountOfLocaleMaxs);

	int count = 1;
	int count2 = 0;
	while (count < amountOfNum)
	{
		if (arr[count] > arr[count - 1] && arr[count] > arr[count + 1]) {
			arrayOfLocaleMaxs[count2] = arr[count];
			count2++;
		}
		count++;
	}

	printf("locale maxs: ");
	for (int i = 0; i < amountOfLocaleMaxs; i++) {
		printf("%d ", arrayOfLocaleMaxs[i]);
	}
	printf("\n");

	printf("amount of locale maxs: %d\n", foundAmountOfLocaleMaxs(arr, amountOfNum));

	int minOfLocaleMaxs = 99999999;
	for (int i = 0; i < amountOfLocaleMaxs; i++) {
		if (arrayOfLocaleMaxs[i] < minOfLocaleMaxs) {
			minOfLocaleMaxs = arrayOfLocaleMaxs[i];
		}
	}
	printf("min of locale maxs %d\n", minOfLocaleMaxs);
}


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




	foundLocaleMaxs(arr, foundAmountOfLocaleMaxs(arr, amountOfNum), amountOfNum);

	system("pause");
	return 0;

}