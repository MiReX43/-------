#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


double name(double U, double R)
{
	double I;
	I = U / R;
	return I;

}

void main()
{
	setlocale(LC_CTYPE, "RUS");

	double U, R, I;

	printf("������� ���������� � ������������� ���� (�����): ");
	scanf("%lf", &U);

	printf("������� ������������� � ������������� ���� (��): ");
	scanf("%lf", &R);

	I = name(U, R);

	printf("���� ���� �����: %lf A", I);
}
