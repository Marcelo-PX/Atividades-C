#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	
	int i, num, un;
	double valor, total;
	
	srand((unsigned)time(NULL));
	
	char food[11][30] = {{},
		{"1- Camarao doce"},
		{"2- Rato empanado"},
		{"3- Ciri frito"},
		{"4- Espeto feijao queimado"},
		{"5- Rocambole"},
		{"6- Pizza de abacaxi"},
		{"7- Balde de sopa 2l"},
		{"8- Esfirra de brocoles"},
		{"9- Rapamole"},
		{"0- Sair"}
	};
	printf("-- Padaria do Robson --\n");
	for(i = 1; i <= 10; i++) {
		printf("%s\n",food[i]);
	}	
	do{
		printf("\n Informe o numero da opcao: ");
		scanf(" %d", &num);
		
		if(num >= 1 && num <= 9) {
			
			valor = 5+(rand()%35);
			printf(" O item '%s' custa R$ %.2lf\n", food[num], valor);
	
			printf(" Informe a quantidade: ");
			scanf(" %d", &un);
			
			total = total+(valor*un);
			
			printf(" Subtotal: %.2lf\n", total);
			
		}else if(num != 0) {
			printf("\n-- Opcao invalida! --\n");
		}
		
	}while(num != 0);
	
	printf(" O total da compra: R$ %.2lf", total);
	
	getch();
}