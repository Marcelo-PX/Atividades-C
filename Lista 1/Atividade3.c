#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "PORTUGUESE");
	
	char matriz[100][5];
	int i;
	
	printf("-- Faça um café em 5 passos --\n");
	
	for (i = 1; i <= 5; i++){
		
		printf(" Passo %d: ", i);
		scanf(" %[^\n]", &matriz[i]);
		
		printf(" Etapa concluída: %s\n\n", matriz[i]);
				
	}
		
	printf(" Cafezinho pronto! :D");
	
	getch();
}
