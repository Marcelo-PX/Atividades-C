#include <stdio.h>
#include <conio.h>

void main(){

	int i;
	
	printf("> Valores impares de 0 a 20:\n");
	
	for(i = 0; i <= 20; i++){
		
		if(i % 2 != 0){

			printf("> %d\n", i);
		}
	}

	getch();
}
