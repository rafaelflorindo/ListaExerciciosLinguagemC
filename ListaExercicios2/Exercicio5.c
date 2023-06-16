/*
5 - José é um comerciante de uma mercearia de médio porte e todo o dia passa por
um dilema, fechar o seu caixa. Durante o dia todas as vendas são computadas e
geradas notas fiscais de saídas, contudo, durante o mesmo dia podem ter notas fiscais
de entradas, ou seja, reposição de estoque. Sendo assim, José precisa de um
algoritmo que leia uma sequência de 10 notas fiscais independente se for de
entrada ou de saída, para cada nota ele irá ler: o valor e o tipo [1 – entrada e 2 –
saída] e ao final, imprimir na tela o total das notas de Entrada, e de Saída, bem
como o valor do caixa.
**/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define MAX 4

int main(){

  	setlocale(LC_ALL, "Portuguese");
    
	int tipoNota;
    int notas = 0;
	int tipos = 0;
  	
	float notasFiscais[MAX][2];
    float valorNota, receitas, despesas;
  	  	
  	
  	for(notas=0; notas < MAX; notas++){
  		
		system("cls");
		printf("----------------------------------------------------------------------\n");
		printf("Informe o valor da nota: ");
  		scanf("%f", &valorNota);
  		notasFiscais[notas][tipos] = valorNota;
		
		printf(">> Informe o tipo da nota [1 – entrada e 2 – saída]: ");
		scanf("%d", &tipoNota);
		//tarefa: validar o tipo da nota
		switch(tipoNota){
			case 1:
				despesas += valorNota;	
				notasFiscais[notas][tipos+1] = tipoNota;
			break;
			case 2:
				receitas += valorNota;	
				notasFiscais[notas][tipos+1] = tipoNota;
			break;
			default:
				printf("\nTipo Inválido, tente novamente\n");
		}		
	}
	system("cls");
	
	printf("----------------------------------------------------------------------\n");
	for(notas=0; notas < MAX; notas++){
		printf("\n\nNota %d", notas+1);
		printf("\nValor da nota: %.2f", notasFiscais[notas][tipos]);
		printf("\nTipo da nota: %.f", notasFiscais[notas][tipos+1]);
	}
	printf("\n----------------------------------------------------------------------\n");
	printf("\n\nTotal de Despesas: %.2f", despesas);
	printf("\n\nTotal de Receitas: %.2f", receitas);
	
	return 0;
}

