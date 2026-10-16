#define _USE_MATH_DEFINES

#include <stdio.h>
#include <locale.h>
#include <math.h>

double solution();

int main() {

	// Кодировка
	setlocale(LC_ALL, ".UTF-8");

	solution();

	return 0;
}

double solution() {

	// F(1.5 ∙ 10^−6, −2 ∙ 10^9)

	double x = 1.5 * pow(10, -6);
	double y = -2 * pow(10, 9);

	double numerator = x + ( (2 + y) / pow(x, 2) );

	double denominator = y + ( 1 / pow(pow(x, 2) + 10, 1. / 2) );

	double F = numerator / denominator;

	printf("Результат выражения: %.2e\n", F);


	// F(2, 5)

	x = 2; y = 5;

	numerator = x + ((2 + y) / pow(x, 2));
	denominator = y + (1 / pow(pow(x, 2) + 10, 1. / 2));
	F = numerator / denominator;

	printf("Результат выражения: %.6lf\n", F);
}

