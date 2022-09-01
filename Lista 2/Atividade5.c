#include <stdio.h>
#include <conio.h>

int main(){
	
	float temp;
	
	printf("Informe a temperatura em graus C: ");
	scanf(" %f", &temp);
	
	float fah = (9*temp+160)/5;
	
	printf("A temperatura em Fahrenheit e: %.2f", fah);
	
	getch();
}