#include <stdio.h>
#include <conio.h>
#include <string.h>

float funSoma(float n1, float n2) {
	
	float soma;
	
	soma = n1+n2;
	
	return soma;
}
float funSub(float n1, float n2) {
	
	float sub;
	
	sub = n1-n2;
	
	return sub;
}
float funMulti(float n1, float n2) {
	
	float multi;
	
	multi = n1*n2;
	
	return multi;
}
float funDiv(float n1, float n2) {
	
	float div;
	
	div = n1/n2;
	
	return div;
}
void funResult(float n1, float n2, char op[2]){
	
	float result;
	
	if(strcmp(op,"+") == 0) {
		
		result = funSoma(n1,n2);
		printf("--> RESULTADO: %.0f", result);	
	}
	else if(strcmp(op,"-") == 0) {
		
		result = funSub(n1,n2);
		printf("--> RESULTADO: %.0f", result);
	}
	else if(strcmp(op,"*") == 0) {
		
		result = funMulti(n1,n2);
		printf("--> RESULTADO: %.0f", result);
	}
	else if(strcmp(op,"/") == 0) {
		
		result = funDiv(n1,n2);
		printf("--> RESULTADO: %.2f", result);
	}
	else{
		printf("\n--> Operacao invalida!\n");
	}
	return;
}

void main() {
	
	float n1, n2;
	char op[2];
	
	printf("--> Informe o primeiro numero: ");
	scanf(" %f", &n1);
	printf("--> Informe o segundo numero: ");
	scanf(" %f", &n2);
	printf("--> Informe a operacao matematica: ");
	scanf(" %s", &op);
	
	funResult(n1,n2,op);

	getch();
}