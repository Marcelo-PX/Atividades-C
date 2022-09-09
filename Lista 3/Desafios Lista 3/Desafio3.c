#include <stdio.h>
#include <conio.h>

void main(){

	float a, b, c;
	
	printf("Calcule os lados de um triangulo.\n\n");
	printf("Informe o valor de A: ", a);
	scanf(" %f", &a);
	printf("Informe o valor de B: ", b);
	scanf(" %f", &b);
	printf("Informe o valor de C: ", c);
	scanf(" %f", &c);
	
	printf("> A = %.1f\n> B = %.1f\n> C = %.1f\n", a, b, c);
	
	if(a+b>c && a+c>b && b+c>a){
		
		if(a==b && a==c){
			printf("> O triangulo e um Equilatero!");	
		}else if(a==b||a==c||b==c){
			printf("> O triangulo e um Isosceles!");
		}else{
			printf("> O triangulo e um Escaleno!");
		}
	}else{
		printf("> O objeto nao e um triangulo!");
	}

	getch();
}