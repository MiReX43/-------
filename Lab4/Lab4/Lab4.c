#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>


int main()	
{
	setlocale(LC_CTYPE, "RUS");

	//�������� 3

	int N;

	printf("������ ����� ����������� �����: ");
	scanf("%d", &N);

	printf("\n ��������� ����� ��c��: %d\n ������ ����� ��c�� : %d\n ����� ���� �����: %d\n ����� ��������: %d%d%d\n", N % 10, N / 100, (N/100)+(N/10)%10+(N%10), N % 10, (N / 10) % 10, N / 100);


	//return 0;

	//������� 2
	//��� ������� ����� ����� (a / b) ��������� ������ �������������, 
	//������� ���� ��� ������������ ����� ���������� ���������� 
	//���� float � double ��������� ����� �������� �� ������ ��������.

	int a = 11;
	int b = 3;
	
	printf(" ��������� ������� a/b � ��������������� � float: %.2f\n ��������� ������� a/b � ��������������� � duble: %lf\n", (float)a/b, (double)a/b);

	//������� 1�
	//����� ����������� �����, �������������� 1 / i

	int i;
	double result;

	printf("������� ����� �����: ");
	scanf("%d", &i);

	result = 1.0 / i;

	printf("���������� �����, �������������� 1/%d = %lf", i, result);


	//������� 1�
	//����� ������������������ � ����������� ���� ���������� �������.

	char s;

	printf("������� ������: ");
	scanf("%c", &s);

	printf("��������� ��� �������: %d\n", s);
	printf("����������������� ��� �������: %x\n", s);


	//������� 1�
	//����� ����� � ������� ����� ��������
	double num;

	printf("������� ������������ �����: ");
	scanf("%lf", &num);

	printf("����� �����: %d\n", (int)num);
	printf("������� �����: %.3lf\n", num-(int)num);


	//������� 1
	//����� ��������� ����� ������

	char c;
	int in;
	float f;
	double d;

	printf("������� �������� ���� cahar:");
	scanf(" %c", &c);
	printf("������� �������� ���� int:");
	scanf("%d", &in);
	printf("������� �������� ���� float:");
	scanf("%f", &f);
	printf("������� �������� ���� double:");
	scanf("%lf", &d);

	printf("\n��� ������ char: %c \n��� ������ int: %d \n��� ������ float: %f \n��� ������ double: %g", c, in, f,d);

	return 0;
}