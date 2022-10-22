#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "PORTUGUESE");
	
	float peso, altura, imc;
	
	printf("INFORME SEU PESO: ");
	scanf("%f", &peso);
	printf("INFORME SUA ALTURA: ");
	scanf("%f", &altura);
	
	imc = peso/(altura*altura);
	
	//printf("%.2f", imc);
	
	if(imc <= 18.5)
		{
			printf("SEU IMC: %.1f", imc);
			printf("\nABAIXO DO PESO");
		}
	else if(imc >= 18.6 && imc <= 24.9)
		{
			printf("SEU IMC: %.1f", imc);
			printf("\nPESO NORMAL");
		}
	else if(imc >= 25 && imc <= 29.9)
		{
			printf("SEU IMC: %.1f", imc);
			printf("\nACIMA DO PESO");
		}
	else if(imc >= 30 && imc <= 34.9)
		{
			printf("SEU IMC: %.1f", imc);
			printf("\nOBESIDADE GRAU I");
		}
	else if(imc >= 35 && imc <= 39.9)
		{
			printf("SEU IMC: %.1f", imc);
			printf("\nOBESIDADE GRAU II");
		}
	else
		{
			printf("SEU IMC: %.1f", imc);
			printf("\nOBESIDADE GRAU III");
		}
	
	getch();	
}  
