#include <stdio.h>
#include <conio.h>

void fun(int mes) {
	
	int i;
	
	char meses[13][11] = {{},
		{"Janeiro!"},
		{"Fevereiro!"},
		{"Marco!"},
		{"Abril!"},
		{"Maio!"},
		{"Junho!"},
		{"Julho!"},
		{"Agosto!"},
		{"Setembro!"},
		{"Outubro!"},
		{"Novembro!"},
		{"Dezembro!"},
	};
	
	for(i = 1; i <= mes; i++) {
		
		if(mes == i) {
			
			printf("--> O mes digitado foi: %s\n", meses[i]);
		}	
	}
	
	return;
}

void main() {
	
	int mes;
	
	while(mes == 0) {
		
		printf("--> Informe um numero de 1 a 12: ");
		scanf(" %d", &mes);
	
		if(mes >= 1 && mes <= 12) {
			fun(mes);
		}else{
			printf("--> Mes invalido!\n");
			mes = 0;
		}		
	}
	
	getch();
}