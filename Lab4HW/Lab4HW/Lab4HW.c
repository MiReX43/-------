#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>


void main()
{
	setlocale(LC_CTYPE, "RUS");

    double a, x, res;

    int b = 133;  
    int c = 75;  

    printf("������� ��������� �� ������ 75 �������: ");
    scanf("%lf", &a);
    printf("������� ��������� �� ������ �� ��������� �����: ");
    scanf("%lf", &x);

    res = a + (b - c) * x;

    printf("����� ��������� �������� �� ������� %d �����: %.2f ���.\n", b, res);

    system("pause");
}