#include <stdio.h>
#include <conio.h>

void fun(int *num) {
	
	if(*num < 0) {*num = *num*-1;}
	
	return;
}

void main() {
	
	int num;
	
	printf("--> Informe um numero: ");
	scanf(" %d", &num);
	
	fun(&num);
	
	printf("O numero digitado foi: %d", num);

	getch();
}
