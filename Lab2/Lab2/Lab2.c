#include <stdio.h>
#include <locale.h>


int main()
{
	int N = 14;
	int K = 5;

	setlocale(LC_CTYPE, "RUS");
	printf("123\n");
	printf("1\n2\n3\n");
	printf("1,\n\t2,\n\t\t3.\n");
	printf("%d,\n%3d,\n%5d.\n", 1, 2, 3);
	printf("%10.3f\n ", 12.234657);
	printf("%10.5f\n ", 12.234657);
	printf("������� �� ������� %d �� %d ����� %d\n", 5, 2, 5 % 2);
	printf("������� �� ������� %d �� %d ����� %d\n", 7, 5, 7 % 5);
	printf("������� �� ������� %d �� %d ����� %d\n", 2000, 4, 2000 % 4);
	printf("%g ��������� %e ����� %f\n ", 5., 2., 5. / 2);

	printf("%d ��������� %d ����� %d\n ", 5., 2., 5. / 2);
	printf("%f ��������� %f ����� %f\n ", 5., 2., 5. / 2);
	printf("%g ��������� %g ����� %g\n ", 5., 2., 5. / 2);
	printf("%e ��������� %e ����� %e\n ", 5., 2., 5. / 2);

	printf("������ %d ����� %d ����� 00 ������\n", N, K);
	printf("���� %d ������ �����\n", N * 60 + K);
	printf("�� �������� �������� %d ����� � %d �����\n", 23 - N, 60 - K);
	printf("� 8.00 ������ %d ������\n", (N - 8) * 60 * 60);
	float h = 14;
	float t = 5;
	printf("������� ��� = %.2f ����� � ������� ������ = %.2f ����\n", h / 24, t / 60);

	float n = 3;
	float L = 313;

	printf("����:\n\t%4.f\n\t%4.f\n\t_________\n�����:\n\t%+08.2f",n, L, n / L);

	return 0;
}
