#include <stdio.h>
#include <conio.h>
#include <locale.h>

float funCalculo(float n1, float n2) {
	
	float media;
	
	media = (n1+n2)/2;
	
	return media;
}

void funResultado(float media) {
	
	if(media >= 7.0) {
		printf("\n--> APROVADO!\n");
		
	}else if(media >= 3.5){
		printf("\n--> RECUPERAÇÃO!\n");
		
	}else{
		printf("\n--> REPROVADO!\n");
	}
	
	return;
}

void main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, media;
	
	printf("--> MÉDIA = 7\n\n");
	printf("--> Informe a primeira nota: ");
	scanf(" %f", &n1);
	printf("--> Informe a segunda nota: ");
	scanf(" %f", &n2);
	
	if(n1 >= 0 && n1 <= 10 && n2 >= 0 && n2 <= 10){
		
		media = funCalculo(n1,n2);
		funResultado(media);
		
	}else{
		
		printf("\n--> VALOR INVÁLIDO!\n");
	}
		
	getch();
}
