#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	system("chcp 1251");
	Task10();
	return 0;
}

int Task10()
{
	int  a, b, c;
	printf("\n������� ����� ������� �������������� ������������ (������� � ������ ���� ����������):\n");
	printf("������� a\n");
	scanf("%d", &a);
	printf("������� b\n");
	scanf("%d", &b);
	printf("������� c\n");
	scanf("%d", &c);
	if (c * c == a * a + b * b)
	{
		Treugolnik(a, b, c); 
	}
	else
	{
		printf("\n������ ������������ �� ����������!");
	}
}



int Treugolnik( a, b, c)
{
	int chose;
	printf("\n�������� �������� ��������\n1 - ���������� ������� ������\n2 - ��������� ����������� ������\n3 - ��������� ������\n");
	scanf("%d", &chose);
	switch (chose)
	{
	case 1:
		Tri_area(a, b, c);
		break;

	case 2:
		printf("\n�����������");
		break;

	case 3:
		Tri_paint(a, b, c);
		break;

	default:
		printf("\n�������� ��������!");
		break;
	}

}


int Tri_area( a, b, c)
{
	double p;
	p = ((a + b + c) / 2);
	printf("\n������� ������������ �����: %.2f\n", sqrt( p * (p-a) * (p-b) * (p-c) ));
}




int Tri_paint(a, b, c)
{
	printf("��� ������� ������������:\n");
	for (int i = 0; i < a; i++)
	{ 
		for (int j = 0; j <= i; j++)
		{ 
			printf("*");
		}
		printf("\n");
	}
}