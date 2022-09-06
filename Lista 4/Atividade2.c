#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float carlosVillagran = 1.40; // Kiko
	float robertoBolanos = 1.10; //  Chaves
	int ano = 0;
	
	while(robertoBolanos < carlosVillagran){
		
		carlosVillagran = carlosVillagran+0.02;
		
		robertoBolanos = robertoBolanos+0.03;
			
		ano++;
	}
	
	printf("O Chavito será maior que o Tesouro em %d anos.", ano);
	
	getch();	
}
