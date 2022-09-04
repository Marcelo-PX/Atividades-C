#include <stdio.h>
#include <conio.h>

int main(){
	
	float salAntigo;
	float salNovo;
	float aum;
	
	printf("Informe o salario do colaborador: ");
	scanf(" %f", &salAntigo);
	
	if(salAntigo <= 1400){
		
		aum = salAntigo*15/100;
		salNovo = salAntigo+aum;
		
		printf("--> O aumento sera de R$%.2f (15%%).\n", aum);
		
		printf("--> O salario vai subir de R$%.2f para R$%.2f!", salAntigo, salNovo);
		
	}else if(salAntigo <= 2000){
		
		aum = salAntigo*12/100;
		salNovo = salAntigo+aum;
		
		printf("--> O aumento sera de R$%.2f (12%%).\n", aum);
		
		printf("--> O salario vai subir de R$%.2f para R$%.2f!", salAntigo, salNovo);
		
	}else if(salAntigo <= 3000){
		
		aum = salAntigo*10/100;
		salNovo = salAntigo+aum;
		
		printf("--> O aumento sera de R$%.2f (10%%).\n", aum);
		
		printf("--> O salario vai subir de R$%.2f para R$%.2f!", salAntigo, salNovo);
		
	}else if(salAntigo <= 3800){
		
		aum = salAntigo*7/100;
		salNovo = salAntigo+aum;
		
		printf("--> O aumento sera de R$%.2f (7%%).\n", aum);
		
		printf("--> O salario vai subir de R$%.2f para R$%.2f!", salAntigo, salNovo);
		
	}else if(salAntigo <= 5000){
		
		aum = salAntigo*4/100;
		salNovo = salAntigo+aum;
		
		printf("--> O aumento sera de R$%.2f (4%%).\n", aum);
		
		printf("--> O salario vai subir de R$%.2f para R$%.2f!", salAntigo, salNovo);
		
	}else{

		printf("--> Este colaborador nao recebera aumento!");
		
	}
	
	getch();
}