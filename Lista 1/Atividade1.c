#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "PORTUGUESE");
	
	char vet[4];
	char str[4] = "SIM";
	
	printf("Deseja trocar o pneu do carro? (Digite SIM para trocar): ");
	scanf(" %s", &vet);
	
	int ret = strcasecmp(vet, str);
	
	if(ret == 0){
		printf("\n-- Pneu trocado com sucesso! :) ");
	}else{
		printf("\n-- O Pneu não foi trocado :( ");
	}
	
	getch();
}
