#include <stdio.h>
#include <conio.h>

void main(){
	
	int j, i, n1, n2, n3;
	
	printf("> Informe o primeiro numero: ");
	scanf(" %d", &n1);
	printf("> Informe o segundo numero: ");
	scanf(" %d", &n2);
	printf("\n");
	
	if(n2 < n1){
		n3 = n1;
		n1 = n2;
		n2 = n3;
	}	
	for(i = n1; i <= n2; i++){
		printf("Tabuada do %d!\n", i);
		
		for(j = 1; j <= 10; j++){
			int x = i*j;
			printf("> %d x %d = %d\n", i, j, x);
		}
		printf("\n");
	}
	
	getch();
}