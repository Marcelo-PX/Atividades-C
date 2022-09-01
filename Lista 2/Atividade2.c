#include <stdio.h>
#include <conio.h>

int main(){
	
	int num;
	
	printf("Informe um numero inteiro: ");
	scanf(" %d", &num);
	
	if(num < 10){
		
		printf("O numero %d esta abaixo de 10!", num);
		
	}else if(num > 50){
		
		printf("O numero %d esta acima de 50!", num);
				
	}else{
		
		printf("O numero %d esta entre 10 e 50!", num);
	}
	
	getch();
}