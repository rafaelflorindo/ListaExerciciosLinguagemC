#include <stdio.h>

int main(){
	float nota;
	int frequencia;
	
	printf("Informe a sua nota: ");
	scanf("%f", &nota);
	printf("Informe a sua frequencia escolar: ");
	scanf("%d", &frequencia);
	
	if((nota >= 7.0) && (frequencia > 75)){
		printf("Aprovado!");
	}else{
		printf("Reprovado!");
	}
}
