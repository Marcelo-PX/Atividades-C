#include <stdio.h>
#include <conio.h>

int main(){
	
	float num1;
	float num2;
	
	printf("Informe o primeiro numero: ");
	scanf(" %f", &num1);
	printf("Informe o segundo numero: ");
	scanf(" %f", &num2);
	
	if(num1 < num2){
		
		printf("O numero %.1f e MENOR que o numero %.1f!", num1, num2);
		
	}else if(num1 > num2){
		
		printf("O numero %.1f e MAIOR que o numero %.1f", num1, num2);
				
	}else{
		
		printf("Ambos os numeros sao iguais!", num1, num2);
	}
	
	getch();
}