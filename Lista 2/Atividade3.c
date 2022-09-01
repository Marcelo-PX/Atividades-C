#include <stdio.h>
#include <conio.h>

int main(){
	
	int num;
	
	printf("Informe um numero inteiro: ");
	scanf(" %d", &num);
	
	int x = num-1;
	int y = num+1;
	
	printf("O numero %d vem depois de %d e antes de %d.\n", num, x, y);
	
	getch();
}