#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void funCalculo(char nome[2][20],char letra[2][2],double valor[2]) {
		
	printf("\n Obs: Ao comprar apenas um produto, desconto de 10%%\n Comprar ambos os produtos, tem desconto de 15%%\n\n");
	
	int i, un, un2;
	char produto[1][6];
	double valorFinal;
	
	printf(" Deseja comprar qual produto? (Digite A, B ou Ambos): ");
	scanf(" %s", &produto[0]);
		
	if(_stricmp(produto[0],"Ambos") == 0) {
		
		printf(" Informe a quantidade do produto %s: ",letra[0]);
		scanf(" %d", &un);
		printf(" Informe a quantidade do produto %s: ",letra[1]);
		scanf(" %d", &un2);
	}else{
		printf(" Informe a quantidade desejada: ");
		scanf(" %d", &un);
	}
	for(i = 0; i < 2; i++) {
		
		if(_stricmp(produto[0],letra[i]) == 0) {
			
			valorFinal = valor[i]*un;
			valorFinal = valorFinal-(valorFinal*10/100);
			
			printf("\n--> %d unidade(s) de '%s' custara R$ %.2lf a vista!", un, nome[i], valorFinal);		
		}
		if(_stricmp(produto[0],"Ambos") == 0) {
			i = 2;
			valorFinal = (valor[0]*un)+(valor[1]*un2);
			valorFinal = valorFinal-(valorFinal*15/100);
			
			printf("\n--> %d unidade(s) de '%s' e %d unidade(s) de '%s' custara R$ %.2lf a vista!", un, nome[0], un2, nome[1], valorFinal);		
		}
	}
	return;
}

void main() {
	
	int i;
	char nome[2][20];
	char letra[2][2] = {"A","B"};
	double valor[2];
	
	for(i = 0; i < 2; i++) {
		printf("-- Cadastre o produto %s --\n",letra[i]);
		
		printf(" Informe o nome do produto %s: ",letra[i]);
		scanf("%[^\n]", &nome[i]);
		printf(" Informe o valor do produto %s: ",letra[i]);
		scanf("%lf", &valor[i]);
		
		printf("\n");
		fflush(stdin);
	}
	system("cls");
	printf("--> O item '%s' custa R$ %.0lf (Produto %s) <--\n", nome[0], valor[0], letra[0]);
	printf("--> O item '%s' custa R$ %.0lf (Produto %s) <--\n", nome[1], valor[1], letra[1]); 
	
	funCalculo(nome,letra,valor);
	
	getch();
}