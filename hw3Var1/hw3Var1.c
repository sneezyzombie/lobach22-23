#include <stdio.h>
#include <locale.h>
#include <math.h>
#define pi 3.14

int main() {

	setlocale(LC_ALL, "rus");

	printf("����� ����������!\n");
	Sleep(500);
	system("cls");

	int repeatTime = 0;

	while (repeatTime < 2) {

		printf("�������� .");
		Sleep(500);
		system("cls");

		printf("�������� ..");
		Sleep(500);
		system("cls");

		printf("�������� ...");
		Sleep(500);
		system("cls");

		repeatTime++;

	}

	int userInput;

	do
	{

		printf("����� ������:\n1. �������������.\n2. �����������.\n3. ����.\n0. ����� �� ����������\n");
		printf("����: ");
		scanf_s("%d", &userInput);
		system("cls");

		int userinputInsideMenu;
		float var1, var2;

		if (userInput == 1) {

			printf("������� ��� ������� ��������������: ");
			scanf_s("%f %f", &var1, &var2);

			do
			{
				system("cls");
				printf("����:\n1. ����� ������� ��������������.\n2. ����� �������� ��������������.\n3. ����� ��������� ��������������\n4. ��������� � ������ ������.\n0. �����.\n");

				printf("����: ");
				scanf_s("%d", &userinputInsideMenu);

				if (userinputInsideMenu == 4) {
					system("cls");
					break;
				}
				else if (userinputInsideMenu == 1) {
					printf("������� ��������������: %.2f\n", var1 * var2);
					system("pause");
				}
				else if (userinputInsideMenu == 2) {
					printf("�������� ��������������: %.2f\n", 2 * (var1 + var2));
					system("pause");
				}
				else if (userinputInsideMenu == 3) {
					printf("��������� ��������������: %.2f\n", sqrt(var1 * var1 + var2 * var2));
					system("pause");
				}
				else
				{
					system("pause");
					return 0;
				}

			} while (1);

		}
		else if (userInput == 2) {

			printf("������� ��� ������� �������������� ������������: ");
			scanf_s("%f %f", &var1, &var2);

			do
			{
				system("cls");
				printf("����:\n1. ����� ������� ������������.\n2. ����� �������� ������������.\n3. ����� ��������� ������������\n4. ��������� � ������ ������.\n0. �����.\n");

				printf("����: ");
				scanf_s("%d", &userinputInsideMenu);

				if (userinputInsideMenu == 4) {
					system("cls");
					break;
				}
				else if (userinputInsideMenu == 1) {
					printf("������� ������������: %.2f\n", (var1 * var2) / 2);
					system("pause");
				}
				else if (userinputInsideMenu == 2) {
					printf("�������� ������������: %.2f\n", 2 * var1 + var2 + sqrt(var1 * var1 + var2 * var2));
					system("pause");
				}
				else if (userinputInsideMenu == 3) {
					printf("��������� ������������: %.2f\n", sqrt(var1 * var1 + var2 * var2));
					system("pause");
				}
				else
				{
					system("pause");
					return 0;
				}

			} while (1);

		}

		else if (userInput == 3) {

			printf("������� ������ �����: ");
			scanf_s("%f", &var1);

			do
			{
				system("cls");
				printf("����:\n1. ����� ������� �����.\n2. ����� ����� ���������� �����.\n3. ����� ������� �����\n4. ��������� � ������ ������.\n0. �����.\n");

				printf("����: ");
				scanf_s("%d", &userinputInsideMenu);

				if (userinputInsideMenu == 4) {
					system("cls");
					break;
				}
				else if (userinputInsideMenu == 1) {
					printf("������� �����: %.2f\n", pi * var1 * var1);
					system("pause");
				}
				else if (userinputInsideMenu == 2) {
					printf("����� ����������: %.2f\n", 2 * pi * var1);
					system("pause");
				}
				else if (userinputInsideMenu == 3) {
					printf("������� �����: %.2f\n", 2 * var1);
					system("pause");
				}
				else
				{
					system("pause");
					return 0;
				}

			} while (1);

		}



	} while (userInput != 0);




	system("pause");
	return 0;

}