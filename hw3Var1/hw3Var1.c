#include <stdio.h>
#include <locale.h>
#include <math.h>
#define pi 3.14

int main() {

	setlocale(LC_ALL, "rus");

	printf("Добро пожаловать!\n");
	Sleep(500);
	system("cls");

	int repeatTime = 0;

	while (repeatTime < 2) {

		printf("Загрузка .");
		Sleep(500);
		system("cls");

		printf("Загрузка ..");
		Sleep(500);
		system("cls");

		printf("Загрузка ...");
		Sleep(500);
		system("cls");

		repeatTime++;

	}

	int userInput;

	do
	{

		printf("Выбор фигуры:\n1. Прямоугольник.\n2. Треугольник.\n3. Круг.\n0. Выйти из приложения\n");
		printf("Ввод: ");
		scanf_s("%d", &userInput);
		system("cls");

		int userinputInsideMenu;
		float var1, var2;

		if (userInput == 1) {

			printf("Введите две стороны прямоугольника: ");
			scanf_s("%f %f", &var1, &var2);

			do
			{
				system("cls");
				printf("Меню:\n1. Найти площадь прямоугольника.\n2. Найти периметр прямоугольника.\n3. Найти диагональ прямоугольника\n4. Вернуться к выбору фигуры.\n0. Выйти.\n");

				printf("Ввод: ");
				scanf_s("%d", &userinputInsideMenu);

				if (userinputInsideMenu == 4) {
					system("cls");
					break;
				}
				else if (userinputInsideMenu == 1) {
					printf("Площадь прямоугольника: %.2f\n", var1 * var2);
					system("pause");
				}
				else if (userinputInsideMenu == 2) {
					printf("Периметр прямоугольника: %.2f\n", 2 * (var1 + var2));
					system("pause");
				}
				else if (userinputInsideMenu == 3) {
					printf("Диагональ прямоугольника: %.2f\n", sqrt(var1 * var1 + var2 * var2));
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

			printf("Введите две стороны прямоугольного треугольника: ");
			scanf_s("%f %f", &var1, &var2);

			do
			{
				system("cls");
				printf("Меню:\n1. Найти площадь треугольника.\n2. Найти периметр треугольника.\n3. Найти диагональ треугольника\n4. Вернуться к выбору фигуры.\n0. Выйти.\n");

				printf("Ввод: ");
				scanf_s("%d", &userinputInsideMenu);

				if (userinputInsideMenu == 4) {
					system("cls");
					break;
				}
				else if (userinputInsideMenu == 1) {
					printf("Площадь треугольника: %.2f\n", (var1 * var2) / 2);
					system("pause");
				}
				else if (userinputInsideMenu == 2) {
					printf("Периметр треугольника: %.2f\n", 2 * var1 + var2 + sqrt(var1 * var1 + var2 * var2));
					system("pause");
				}
				else if (userinputInsideMenu == 3) {
					printf("Диагональ треугольника: %.2f\n", sqrt(var1 * var1 + var2 * var2));
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

			printf("Введите радиус круга: ");
			scanf_s("%f", &var1);

			do
			{
				system("cls");
				printf("Меню:\n1. Найти площадь круга.\n2. Найти длину окружности круга.\n3. Найти диаметр круга\n4. Вернуться к выбору фигуры.\n0. Выйти.\n");

				printf("Ввод: ");
				scanf_s("%d", &userinputInsideMenu);

				if (userinputInsideMenu == 4) {
					system("cls");
					break;
				}
				else if (userinputInsideMenu == 1) {
					printf("Площадь круга: %.2f\n", pi * var1 * var1);
					system("pause");
				}
				else if (userinputInsideMenu == 2) {
					printf("Длина окружности: %.2f\n", 2 * pi * var1);
					system("pause");
				}
				else if (userinputInsideMenu == 3) {
					printf("Диаметр круга: %.2f\n", 2 * var1);
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