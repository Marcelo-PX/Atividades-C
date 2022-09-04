#include <stdio.h>
#include <conio.h>

int main(){
	
	int num;
	
	printf("Informe um numero inteiro: ");
	scanf(" %d", &num);
	
	if(num >= 0){
		
		printf("O numero digitado foi: %d", num);
		
	}else{
		
		printf("O numero digitado foi: %d", num*-1);
		
	}
	
	getch();
}