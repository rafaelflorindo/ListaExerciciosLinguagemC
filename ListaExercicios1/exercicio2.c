#include<stdio.h>

int main(){
	
	int quantidadeEspetinhos;
	float valorVendaEspetinho, valorCustoEspetinho, valorFranquia;
	float valorTotalVenda, valorFranquiaDia, lucroDia;
	
	valorVendaEspetinho = 5.50; 
	valorCustoEspetinho = 2.5; 
	valorFranquia = 0.5;
	
	printf("Informe a quantidade de Espetinhos: ");
	scanf("%d", &quantidadeEspetinhos);
	
	valorTotalVenda = valorVendaEspetinho * quantidadeEspetinhos;
	valorFranquiaDia = valorFranquia * quantidadeEspetinhos;
	lucroDia = valorTotalVenda - valorFranquiaDia - (valorCustoEspetinho * quantidadeEspetinhos);
	
	printf("\nQuantidade de espetinhos vendidos no dia = %d", quantidadeEspetinhos);
	printf("\nValor total de Venda = %.2f", valorTotalVenda);
	printf("\nValor a ser repassado para a Lotéria = %.2f", valorFranquiaDia);
	printf("\nLucro do dia = %.2f", lucroDia);
}
