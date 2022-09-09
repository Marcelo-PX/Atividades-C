#include <stdio.h>
#include <conio.h>

void main(){
	
	float num, media, soma, maior, menor;
	int start = 0;
	int stop = 0;
	int cont = 0;
	
	do{
		printf("Informe um numero: ");
		scanf(" %f", &num);
		
		if(start != 1 && num >= 0){
			cont++;	
			soma = soma+num;
			start = 1;
			maior = num;
			menor = num;
		
		}else if(num >= 0){
			cont++;
			soma = soma+num;
			
			if(num > maior){
				maior = num;
			}
			if(num < menor){
				menor = num;
			}
	
		}else{stop = 1;}
		
	}while(stop != 1);
	
	media = soma/cont;
	
	printf("\nA media dos numeros lidos: %.1f\n", media);
	printf("O maior numero lido: %.1f\nO menor numero lido: %.1f\n", maior, menor);

	getch();
}