#include <stdio.h>
#include <conio.h>
#include <math.h>

void funCalculo(double n1, double n2) {
	
	double result;
	
	result = pow(n1,n2);
	printf("--> %.1lf elevado a %.1lf = %.0lf", n1, n2, result);
	
	return;
}

void main() {
	
	double n1, n2;
	
	printf("--> Informe o primeiro numero: ");
	scanf(" %lf", &n1);
	printf("--> Informe o segundo numero: ");
	scanf(" %lf", &n2);
	fflush(stdin);
	
	funCalculo(n1,n2);

	getch();
}