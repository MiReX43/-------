#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");

	double U, R, I;

	printf("������� ���������� � ������������� ���� (�����): ");
	scanf("%lf", &U);

	printf("������� ������������� � ������������� ���� (��): ");
	scanf("%lf", &R);

	I = U / R;

	printf("���� ���� �����: %lf A", I);
}
