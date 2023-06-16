/*
3 – Cassia, é uma vendedora de produtos por revistas, e sempre que vai realizar uma
venda necessita calcular o valor mediante escolha do cliente. Sendo assim, para
auxiliar Cassia, implemente um algoritmo que calcule o que deve ser pago por um
produto, considerando o preço normal de etiqueta e a escolha da condição de
pagamento. Utilize os códigos da tabela a seguir para ler qual a condição de
pagamento escolhida e efetuar o cálculo adequado.
Código Condição de pagamento
1. À vista em dinheiro ou cheque, recebe 10% de desconto
2. À vista no cartão de crédito, recebe 15% de desconto
3. Em duas vezes, preço normal de etiqueta sem juros
4. Em duas vezes, preço normal de etiqueta mais juros de 10%
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){

  setlocale(LC_ALL, "Portuguese");
    float precoEtiqueta;
    int condicaoPagamento;
    float valorPagar;
    float parcelas;
  
    do{   
		system("cls");
        printf("********************************************************************************\n"); 
        printf("1. À vista em dinheiro ou cheque, recebe 10%% de desconto\n");
        printf("2. À vista no cartão de crédito, recebe 15%% de desconto\n");
        printf("3. Em duas vezes, preço normal de etiqueta sem juros\n");
        printf("4. Em duas vezes, preço normal de etiqueta mais juros de 10%%\n");
        printf("0. Para sair\n");
        printf("********************************************************************************\n"); 
        printf("Escolha a forma de pagamento: ");
        scanf("%d", &condicaoPagamento);       
      
        switch(condicaoPagamento){
                case 1:
                  system("cls");
                  printf("********************************************************************************\n");
                  printf("Informe o preço do Produto: ");
                  scanf("%f", &precoEtiqueta);
                  valorPagar = precoEtiqueta - (precoEtiqueta*10)/100;
                  printf("\nCondição escolhida: 1. À vista em dinheiro ou cheque, recebe 10%% de desconto\n");
                  printf(">> Valor a pagar: %.2f\n", valorPagar);
                  printf("********************************************************************************\n");
				  system("pause");              
                break;
                case 2:
                  system("cls");
                  
                  printf("Informe o preço do Produto: ");
                  scanf("%f", &precoEtiqueta);
                  valorPagar = precoEtiqueta - (precoEtiqueta*15)/100;
                  printf("\nCondição escolhida: 2. À vista no cartão de crédito, recebe 15%% de desconto\n");
                  printf(">> Valor a pagar: %.2f\n", valorPagar);  
                  printf("********************************************************************************\n");
				  system("pause");
                break;
                case 3:
                  system("cls");
                  printf("Informe o preço do Produto: ");
                  scanf("%f", &precoEtiqueta);
                  parcelas = precoEtiqueta/2;
                  printf("\nCondição escolhida: 3. Em duas vezes, preço normal de etiqueta sem juros\n");
                  printf(">> Valor a pagar: %.2f em 2 x de %.2f\n", precoEtiqueta, parcelas);  
                  printf("********************************************************************************\n");
				  system("pause");
                break;
                case 4:
                  system("cls");
                  printf("Informe o preço do Produto: ");
                  scanf("%f", &precoEtiqueta);
                  valorPagar = (precoEtiqueta*10)/100 + precoEtiqueta;
                  parcelas = valorPagar/2;
                  printf("\nCondição escolhida: 4. Em duas vezes, preço normal de etiqueta mais juros de 10%%\n");
                  printf(">> Valor a pagar: %.2f em 2 x de %.2f\n", valorPagar, parcelas);  
                  printf("********************************************************************************\n");
				  system("pause");
                break;
                case 0:
                  system("cls");
                  printf("********************************************************************************\n");
                  printf("Saindo do sistema!!!\n");
                  printf("********************************************************************************\n");
				  system("pause");
                break;
                default:
                  system("cls");
                  printf("********************************************************************************\n");
				  printf("Condição de pagamento inválida\n");
                  printf("********************************************************************************\n");
				  system("pause");
        }
        }while(condicaoPagamento != 0);    
    return 0;
}

