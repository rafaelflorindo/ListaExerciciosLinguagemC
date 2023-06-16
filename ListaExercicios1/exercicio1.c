#include<stdio.h>
#include<string.h>

int main(){
	
	int codigoCliente;
	char nomeFilme[60];
	float valorTotalLocacao = 15.00;
	int quantidadeDias = 3;
	
	printf("Informe o código do cliente: ");
	scanf("%d",&codigoCliente);
	printf("Informe o nome do Filme: ");
	fflush(stdin);
	gets(nomeFilme);
	
	printf("\nCódigo do cliente: %d", codigoCliente);
	printf("\nNome do Filme: %s", nomeFilme);
	printf("\nValor total da Locação: %.2f", valorTotalLocacao);
	printf("\nQuantidade de dias: %d", quantidadeDias);
	
	
}
