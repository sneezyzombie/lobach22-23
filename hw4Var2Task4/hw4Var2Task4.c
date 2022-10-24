#include<stdio.h>
#include<locale.h>
#include<malloc.h>
#include<string.h>
#include<ctype.h>

int amountOfSimbols(char* str) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	int result = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] != ' ') {
			result++;
		}
	}
	return result;
}

int amountOfLowercase(char* str) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	int result = 0;
	for (int i = 0; i < len; i++) {
		if (!(isupper(str[i])) && str[i] != ' ') {
			result++;
		}
	}
	return result;
}

int amountOfUppercase(char* str) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	int result = 0;
	for (int i = 0; i < len; i++) {
		if (isupper(str[i])) {
			result++;
		}
	}
	return result;
}

int amountOfWords(char* str) {
	int len = 0;
	while (str[len] != '\0') {
		len++;
	}
	int result = 0;
	for (int i = 0; i < len - 2; i++) {
		if ((str[i] != ' ') && (str[i + 1] == ' ') && (str[i + 2] != ' ')) {
			result++;
		}
	}
	return ++result;
}

int main() {

	char* str;
	str = (char*)malloc(sizeof(char*) * 100);
	gets(str);


	puts(str);
	printf("amount of simbols %d\n", amountOfSimbols(str));
	printf("amount of lowercase %d\n", amountOfLowercase(str));
	printf("amount of uppercase %d\n", amountOfUppercase(str));
	printf("amount of words %d\n", amountOfWords(str));
	system("pause");
	return 0;
}