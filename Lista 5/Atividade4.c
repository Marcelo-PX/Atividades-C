#include <stdio.h>
#include <conio.h>

void funCalculo(int num) {
	
	if(num % 2 == 0) {
		printf("O numero %d e divisivel por 2", num);
	}else if(num % 3 == 0) {
		printf("O numero %d e divisivel por 3", num);
	}else{
		printf("Valor invalido!");
	}
	return;
}

void main() {
	
	int num;
	
	printf("--> Informe um numero: ");
	scanf(" %d", &num);
	
	funCalculo(num);

	getch();
}
