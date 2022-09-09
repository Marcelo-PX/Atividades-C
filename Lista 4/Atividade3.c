#include <stdio.h>
#include <conio.h>

int main(){
	
	int i, num;
	
	printf("> Informe um numero inteiro: ");
	scanf(" %d", &num);
	
	for(i = 1; i <= 10; i++){
		
		int x = num*i;
		printf("> %d x %d = %d\n", num, i, x);
	}
	
	getch();
}