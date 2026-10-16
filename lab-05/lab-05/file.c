#define _USE_MATH_DEFINES
#define M_PI            3.14159265358979323846

#include <stdio.h>
#include <locale.h>
#include <math.h>

float task1();
float task2and3();

int main() {

	// Кодировка
	setlocale(LC_ALL, ".UTF-8");

	task1();
	task2and3();

	return 0;
}

float task1() {

	float gr;

	puts("Введите градус:");
	scanf("%f", &gr);

	float rad = gr * M_PI / 180;

	printf("%.6f\n", sin(rad));

	return 0.;
}

float task2and3() {

	// Задание 2

	float x;

	const float P = 3;

	puts("Введите значение x:");
	scanf("%f", &x);
	printf("x = %.1f\n", x);

	float a = pow(P * x, 1. / 2);

	float b = P * pow(x, 2) + pow(a, 1. / 2);

	float y = pow(log(pow(b, 2)), 3) + a * x;

	printf("y = %.1f\n", y);

	// Задание 3

	int A = a; int B = b; int C = y;

	int isTrue = (A % 2 == 0 && B % 2 == 1 || A % 2 == 1 && B % 2 == 0)
		&& (A % 3 == 0 && B % 3 == 0 && C % 3 == 0);

	puts("условие выполнено (1 - да, 0 - нет)");
	printf("%d", isTrue);

	return 0.;
}