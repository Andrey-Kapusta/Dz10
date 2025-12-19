#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int Tri_area(int a, int b, int c);
void Tri_paint(int a, int b, int c);


int main()
{
	system("chcp 1251");
	setlocale(LC_CTYPE, "RUS");
	int  a, b, c;
	double p;
	printf("\nВведите длины стороны прямоугольного треугольника (Сторона с должна быть наибольшей):\n");
	printf("Сторона a\n");
	scanf("%d", &a);
	printf("Сторона b\n");
	scanf("%d", &b);
	printf("Сторона c\n");
	scanf("%d", &c);
	if (c * c == a * a + b * b)
	{
		int chose;
		printf("\nВыбирете желаемое действие\n1 - Нахождение площади фигуры\n2 - Выведение определения фигуры\n3 - Рисование фигуры вводимым знаком\n");
		scanf("%d", &chose);
		switch (chose)
		{
		case 1:
			p = Tri_area(a, b, c);
			printf("\nПлощадь треугольника равна: %.2f\n", sqrt(p * (p - a) * (p - b) * (p - c)));
			break;

		case 2:
			printf("\nТреугольник\n");
			break;

		case 3:
			Tri_paint(a, b, c);
			break;
		default:
			printf("\nНеверное значение!\n");
			break;
		}
	}
	else
	{
		printf("\nТакого треугольника не существует!\n");
	}
}



int Tri_area(int a, int b, int c)
{
	double z;
	z = ((a + b + c) / 2);
	return z;
}





void Tri_paint(int a, int b, int c)
{
	char znak;
	printf("Введите символ:\n");
	getchar();
	scanf("%c", &znak);
	printf("\n");
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%c", znak);
		}
		printf("\n");
	}
}
