#include <stdio.h>
#include <conio.h>
#include <locale.h>
#define N 10

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, num;
	
	printf("Informe um n�mero inteiro %d", num);
	scanf(" %d", num);
	
	for(i = 1; i <= 10; i++){
		
		printf("%d x %d = %d");
	}
	
	
	getch();	
}
