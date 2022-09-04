#include <stdio.h>
#include <conio.h>

int main(){
	
	int idade;
	
	printf("Informe a idade do aluno: ");
	scanf(" %d", &idade);
	
	if(idade == 4 || idade == 5){
		
		printf("--> TURMA A");
		
	}else if(idade >= 6 && idade <= 8){
		
		printf("--> TURMA B");
		
	}else if(idade == 9 || idade == 10){
		
		printf("--> TURMA C");
		
	}else{

		printf("--> Sem turmas!");
		
	}
	
	getch();
}