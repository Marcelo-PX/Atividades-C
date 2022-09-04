#include <stdio.h>
#include <conio.h>

int main(){
	
	float valor;
	float valorFinal;
	float desc;
	
	printf("Informe o valor da compra: ");
	scanf(" %f", &valor);
	
	if(valor >= 500){
		
		desc = valor*15/100;
		valorFinal = valor-desc;
		
		printf("\n--> DESCONTO DE: %.2f REAIS (15%%).\n", desc);
		
		printf("\n--> O VALOR SAI DE: R$%.2f POR APENAS: R$%.2f!\n--> POR TEMPO LIMITADO!", valor, valorFinal);
			
	}else if(valor >= 200){
		
		desc = valor*10/100;
		valorFinal = valor-desc;
		
		printf("\n--> DESCONTO DE: %.2f REAIS (10%%).\n", desc);
		
		printf("\n--> O VALOR SAI DE: R$%.2f POR APENAS: R$%.2f!\n--> POR TEMPO LIMITADO!", valor, valorFinal);
		
	}else{
		
		desc = valor*5/100;
		valorFinal = valor-desc;
		
		printf("\n--> DESCONTO DE: %.2f REAIS (5%%).\n", desc);
		
		printf("\n--> O VALOR SAI DE: R$%.2f POR APENAS: R$%.2f!\n--> POR TEMPO LIMITADO!", valor, valorFinal);
		
	}
	
	getch();
}