#include <stdio.h>
// ������� ���������� �����������
#include<locale.h>

int main() {

	//�������� �����������
	setlocale(LC_ALL, "rus");

	int age;

	// ������� & ����� age � �������� scanf �� scanf_s
	scanf_s("%d", &age);

	// ������� {} ��� ������� if else
	if (age <= 13) {
		// ;
		printf("%d - �������\n", age);
	}
	else if (14 <= age < 25) {
		// %f -> %d
		printf("%d - ���������\n", age);
	}
	// ����� ; 
	else if (25 <= age && age < 60) {
		// %f -> %d
		printf("%d - ��������\n", age);
	}
	else {
		printf("%d - ��������\n", age);
	}
	// ������� system("pause");
	system("pause");
	return 0;
}
