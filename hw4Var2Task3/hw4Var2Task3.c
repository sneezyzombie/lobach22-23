#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<time.h>

int foundMax(int* arr, int border) {
	int max = 0;
	for (int i = 0; i < border; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int swap(int* arr, int border, int num, int max) {

	int buff = arr[border - 1];
	arr[border - 1] = max;
	for (int i = 0; i < border - 1; i++) {
		if (arr[i] == max) {
			arr[i] = buff;
		}
	}
	return arr;
}

int sort(int* arr, int border) {
	for (int i = border; i > 0; i--) {
		swap(arr, i, arr[i], foundMax(arr, i));
	}
}

int main() {

	srand(time(0));

	int border;
	printf("input size of array ");
	scanf_s("%d", &border);
	int* arr = (int*)malloc(sizeof(int) * border);
	for (int i = 0; i < border; i++) {
		arr[i] = 1 + rand() % 101;
	}
	//int arr[] = { 5,1,8,2,4 };

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	sort(arr, border);

	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;

}