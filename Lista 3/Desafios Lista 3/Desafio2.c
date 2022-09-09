#include <stdio.h>
#include <conio.h>
#define N 3

void main(){
	
	int i, age[N], maior, menor;
	int soma = 0;
	float media;
	
	for(i = 1; i <= N; i++){
		
		printf("Informe a idade %d: ", i);
		scanf(" %d", &age[i]);
		
		if(i == 1){
			maior = age[i];
			menor = age[i];
		}
		soma = soma+age[i];
			
		if(age[i] > maior){
			maior = age[i];
		}
		if(age[i] < menor){
			menor = age[i];
		}
	}
	media = soma/N;
	
	printf("\n> Media das idades: %.0f\n", media);
	printf("> Maior idade: %d\n> Menor idade: %d\n", maior, menor);
	
	getch();
}