#include <stdio.h>
#include <conio.h>
#define N 4

int main(){
	
	int i, num[N], impar[N], par[N], maiorPar, maior, menor, dif;
	int soma = 0;
	int cont = 0;
	float media;

	for (i = 1; i <= N; i++){
	
		printf("Digite o numero %d: ", i);
		scanf (" %d", &num[i]);
	
		if(num[i] % 2 != 0){
		
			cont++;
			impar[i] = num[i];
			soma = soma+impar[i];
			
		}else{
			
			if(num[i] != 0){
				
				par[i] = num[i];
				
				if(par[i] > maiorPar){
					
					maiorPar = par[i];
				}		
        	}	
		}
		
		if(num[i] != 0){
				
			if(num[i] > maior){
					
				maior = num[i];
			}
			if(num[i] < menor){
				
				menor = num[i];
			}		
        }
	}
	
	media = soma/cont;
	dif = maior-menor;
	printf("\nMedia dos numeros impares: %.0f", media);
	printf("\nMaior numero PAR: %d", maiorPar);
	printf("\nA diferenca entre %d e %d e de: %d", menor, maior, dif);
	
	getch();
}