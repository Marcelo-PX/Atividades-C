#include <stdio.h>
#include <conio.h>

int main(){
	
	float a;
	float b;
	float c;
	
	printf("Digite o numero da variavel A: ");
	scanf(" %f", &a);
	printf("Variavel A = %.0f\n\n", a);
	printf("Digite o numero da variavel B: ");
	scanf(" %f", &b);
	printf("Variavel B = %.0f\n\n", b);
	
	c = a;
	a = b;
	b = c;
	
	printf("Variavel A invertida = %.0f\n", a);
	printf("Variavel B invertida = %.0f\n", b);
	
	getch();
}