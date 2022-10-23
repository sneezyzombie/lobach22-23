#include<stdio.h>

int main() {

	int m1, m2, m3, s;

	printf("input 3 marks: ");
	scanf_s("%d %d %d", &m1, &m2, &m3);

	s = m1 + m2 + m3;

	if (m1 == -1 || m2 == -1 || m3 == 1 || m1 == 2 || m2 == 2 || m3 == 2) {
		printf("ne sdal\n");
	}
	else
	{
		if (s == 15) {
			printf("otlichnik\n");
		}
		else if (s >= 12) {
			printf("horoshist\n");
		}
		else
		{
			printf("troechnik\n");
		}
	}

	system("pause");
	return 0;

}