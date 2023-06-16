#include <stdio.h>

int main(){
	int idade;
	
	printf("Informe a sua idade: ");
	scanf("%d",&idade);
	
	if(idade >=18){
		printf("Maior de Idade!");
	}else{
		printf("Menor de Idade!");	
	}	
}
