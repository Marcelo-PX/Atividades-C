#include <stdio.h>
#include <conio.h>

int main() {

	float carlosVillagran = 1.40; // Kiko
	float robertoBolanos = 1.10; //  Chaves
	int ano = 0;

	while(robertoBolanos <= carlosVillagran) {

		carlosVillagran = carlosVillagran+0.02;

		robertoBolanos = robertoBolanos+0.03;

		ano++;
	}

	printf("O Chaves sera maior que o Kiko em %d anos.", ano);

	getch();
}
