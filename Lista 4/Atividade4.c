#include <stdio.h>
#include <conio.h>

void main(){
	
	int cont = 0;
	int i, par;
	float media;
	
	for(i = 1; i <= 100; i++){
		
		if(i % 2 == 0){
			cont++;
			par = par+i;	
		}
	}
	media = par/cont;
	printf("A media dos pares de 1 a 100 e = %.0f.", media);
	
	getch();
}