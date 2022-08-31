#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "PORTUGUESE");
	
	char vet[4];
	char str[4] = "SIM";
	
	printf("Deseja comprar um livro? (Digite SIM para comprar): ");
	scanf(" %s", &vet);
	
	int ret = strcasecmp(vet, str);
	
	if(ret == 0){
		printf("\n-- Livro comprado com sucesso! :) ");
	}else{
		printf("\n-- O livro não foi comprado :( ");
	}
	
	getch();
}
