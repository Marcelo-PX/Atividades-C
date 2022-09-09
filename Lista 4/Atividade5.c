#include <stdio.h>
#include <conio.h>

void main(){
	
	int i;
	
	printf("> Valores de 1 a 100 divisiveis por 4:\n");
	
	for(i = 1; i <= 100; i++){
		
		if(i % 4 == 0){

			printf("> %d\n", i);
		}
	}
	
	getch();
}