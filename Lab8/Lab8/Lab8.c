#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include <locale.h>



void main()
{
	setlocale(LC_CTYPE, "RUS");

	//������� 1�

	int degr, N;
	double res;

	printf("������� ������������ �������: ");
	scanf("%d", &degr);

	for (N = 0; N <= degr; N++)
	{
		res = pow(2,N);
		if (res >= 1024)
		{
			printf("2^%d = %.1fK\n", degr, res / 1024);
		}
		else
		{
			printf("2^%d = %.0f\n", degr, res);
		}
	}
	

	//������� 1

	int n, m,s = 0, k = 0;

	printf("������� ������ ��������: ");
	scanf(" %d", &n);
	printf("������� ������ ��������: ");
	scanf(" %d", &m);

	for (int i = m; i >= n; i--) {
		s += i;
		printf("��������� %d ���\n", k++);
	}
	printf("���������: %d\n", s);

	//������� 0

	char c1, c2;
	int num;

	printf("������� ���-�� ��������: ");
	scanf(" %d", &num);

	printf("������� ������ ������: ");
	scanf(" %c", &c1);

	printf("������� ������ ������: ");
	scanf(" %c", &c2);

	putchar('+');
	for (int start = 1; start <= num; start++) {
		if (start <= num / 2) {
			putchar(c1);
		}
		else {
			putchar(c2);
		}
		putchar('!');

	}
	putchar('+');

	return 0;
}