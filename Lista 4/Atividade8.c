#include <stdio.h>
#include <conio.h>

void main(){

	int num;
	int stop = 0;
	int ate25 = 0;
	int ate50 = 0;
	int ate75 = 0;
	int ate100 = 0;
	
	do{
		printf("Informe um numero: ");
		scanf(" %d", &num);
		
		if(num >= 0){
			
			if(num <= 25){
				ate25++;
				printf("O numero %d esta entre 0 e 25.\n\n", num);
				
			}else if(num <= 50){
				ate50++;
				printf("O numero %d esta entre 26 e 50.\n\n", num);
				
			}else if(num <= 75){
				ate75++;
				printf("O numero %d esta entre 51 e 75.\n\n", num);
				
			}else if(num <= 100){
				ate100++;
				printf("O numero %d esta entre 76 e 100.\n\n", num);
				
			}else{
				printf("O numero %d esta acima de 100.\n\n", num);
			}
	
		}else{stop = 1;}
		
	}while(stop != 1);
	
	if(ate25 > 0){
		printf("--> %d numero(s) entre 0 e 25.\n", ate25);
	}
	if(ate50 > 0){
		printf("--> %d numero(s) entre 26 e 50.\n", ate50);
	}
	if(ate75 > 0){
		printf("--> %d numero(s) entre 51 e 75.\n", ate75);
	}
	if(ate100 > 0){
		printf("--> %d numero(s) entre 76 e 100.\n", ate100);
	}
	
	getch();
}