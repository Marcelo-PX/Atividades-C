#include <stdio.h>
#include <conio.h>
#include <locale.h>
#define N 10

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, num[N];
	int soma = 0;
	int cont = 0;
	float media;
	
	for(i = 1; i <= N; i++){
		
		printf("Informe o n�mero %d: ", i);
		scanf(" %d", &num[i]);
		
		soma = soma+num[i];
		cont++;
	}
	
	media = soma/cont;
	printf("A soma � = %d\n", soma);
	printf("A m�dia � = %.1f\n", media);
	
	getch();
}
