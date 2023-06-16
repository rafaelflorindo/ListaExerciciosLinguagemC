/*
4 – Em meados década de 1990, o sistema de educação de uma cidade do interior do estado de São Paulo, utilizava os conceitos finais por letras (A, B, C, D e E).
Especificamente em uma escola, as notas era, calculadas utilizando o conceito de média ponderada (https://brasilescola.uol.com.br/matematica/media-ponderada.htm).
A sua tarefa neste exercício, será escrever um algoritmo que leia o número de identificação, as 3 notas obtidas por um aluno nas 3 verificações e a ME média dos
exercícios que fazem parte da avaliação, e calcule a média de aproveitamento, usando a fórmula:
MA = (nota1 + nota 2 * 2 + nota 3 * 3 + ME * 2)/7
A atribuição dos conceitos obedece a tabela abaixo. O algoritmo deve escrever o número do aluno, suas notas, a média dos exercícios, a média de aproveitamento, o
conceito correspondente e a mensagem 'Aprovado' se o conceito for A, B ou C, e 'Reprovado' se o conceito for D ou E. 
Média de aproveitamento Conceito
>= 90 A
>= 75 e < 90 B
>= 60 e < 75 C
>= 40 e < 60 D
< 40 E
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){

  setlocale(LC_ALL, "Portuguese");
    int identificacao, escolha;
    float nota1, nota2, nota3, mediaExercicio, mediaAproveitamento;
  	char conceito;
    do{   
		system("cls");
        printf("********************************************************************************\n"); 
        printf("1. Calcular Média\n");
        printf("0. Para sair\n");
        printf("********************************************************************************\n"); 
        printf("Escolha a forma de pagamento: ");
        scanf("%d", &escolha);       
      
        switch(escolha){
                case 1:
                  system("cls");
                  printf("********************************************************************************\n");
                  printf("Informe número de identificação do aluno: ");
                  scanf("%d",&identificacao);
                  printf("\nInforme nota 1 [00-10]: ");
                  scanf("%f", &nota1);
                  printf("\nInforme nota 2 [00-10]: ");
                  scanf("%f", &nota2);
                  printf("\nInforme nota 3 [00-10]: ");
                  scanf("%f", &nota3);
                  printf("\nInforme a média de Aproveitamento [00-10]: ");
                  scanf("%f", &mediaExercicio);
				  
				  mediaAproveitamento = (nota1 + (nota2 * 2) + (nota3 * 3) + (mediaExercicio * 2))/7;
				                  
                  if(mediaAproveitamento >= 90){
                  	conceito = 'A';
				  }else if(mediaAproveitamento >= 75){
                  	conceito = 'B';				  	
				  }else if(mediaAproveitamento >= 60){
                  	conceito = 'C';				  	
				  }else if(mediaAproveitamento >= 40){
                  	conceito = 'D';				  	
				  }else{
				  	conceito = 'E';	
				  }
				  
				  system("cls");
				  printf("********************************************************************************\n");
				  printf("\nIdentificação: %d", identificacao);
				  printf("\nMédia calculada: %.2f", mediaAproveitamento);
				  printf("\nConceito: %c", conceito);
                  printf("\n********************************************************************************\n");
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
				  printf("Esta Opção não está valida neste sistema\n");
                  printf("********************************************************************************\n");
				  system("pause");
        }
        }while(escolha != 0);    
    return 0;
}

