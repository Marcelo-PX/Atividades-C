#include <stdio.h>
#include <conio.h>

int main(){
	
	int num;
	
	printf("Informe um numero inteiro: ");
	scanf(" %d", &num);
	
	int x = num*num;
	
	printf("O numero %d elevado ao quadrado e = %d.\n", num, x);
	
	getch();
}