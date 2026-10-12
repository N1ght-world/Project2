#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

double x1, x2, y1_val, y2_val;
double d, d1;
int st();
int main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	st();
	return 0;
}

int st()
{
	printf("Введите координату x1 первой точки: ");
	scanf("%lf", &x1);
	printf("Введите координату y1 первой точки: ");
	scanf("%lf", &y1_val);

	printf("Введите координату x2 второй точки: ");
	scanf("%lf", &x2);
	printf("Введите координату y2 второй точки: ");
	scanf("%lf", &y2_val);

	d = pow((x2 - x1), 2) + pow((y2_val - y1_val), 2);
	d1 = sqrt(d);

	printf("Расстояние между точками: %.2f\n", d1);
	return 0;
}






