#include <stdio.h>
#include <conio.h>

int main(){
	
	float sal1;
	float sal2;
	
	printf("Informe o salario minimo: ");
	scanf(" %f", &sal1);
	printf("Informe o seu salario: ");
	scanf(" %f", &sal2);
	
	float x = sal2/sal1;
	
	printf("Seu salario equivale a %.1f salarios minimos!", x);
	
	getch();
}