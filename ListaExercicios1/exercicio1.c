#include<stdio.h>
#include<string.h>

int main(){
	
	int codigoCliente;
	char nomeFilme[60];
	float valorTotalLocacao = 15.00;
	int quantidadeDias = 3;
	
	printf("Informe o c�digo do cliente: ");
	scanf("%d",&codigoCliente);
	printf("Informe o nome do Filme: ");
	fflush(stdin);
	gets(nomeFilme);
	
	printf("\nC�digo do cliente: %d", codigoCliente);
	printf("\nNome do Filme: %s", nomeFilme);
	printf("\nValor total da Loca��o: %.2f", valorTotalLocacao);
	printf("\nQuantidade de dias: %d", quantidadeDias);
	
	
}
