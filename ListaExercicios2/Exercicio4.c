/*
4 � Em meados d�cada de 1990, o sistema de educa��o de uma cidade do interior do estado de S�o Paulo, utilizava os conceitos finais por letras (A, B, C, D e E).
Especificamente em uma escola, as notas era, calculadas utilizando o conceito de m�dia ponderada (https://brasilescola.uol.com.br/matematica/media-ponderada.htm).
A sua tarefa neste exerc�cio, ser� escrever um algoritmo que leia o n�mero de identifica��o, as 3 notas obtidas por um aluno nas 3 verifica��es e a ME m�dia dos
exerc�cios que fazem parte da avalia��o, e calcule a m�dia de aproveitamento, usando a f�rmula:
MA = (nota1 + nota 2 * 2 + nota 3 * 3 + ME * 2)/7
A atribui��o dos conceitos obedece a tabela abaixo. O algoritmo deve escrever o n�mero do aluno, suas notas, a m�dia dos exerc�cios, a m�dia de aproveitamento, o
conceito correspondente e a mensagem 'Aprovado' se o conceito for A, B ou C, e 'Reprovado' se o conceito for D ou E. 
M�dia de aproveitamento Conceito
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
        printf("1. Calcular M�dia\n");
        printf("0. Para sair\n");
        printf("********************************************************************************\n"); 
        printf("Escolha a forma de pagamento: ");
        scanf("%d", &escolha);       
      
        switch(escolha){
                case 1:
                  system("cls");
                  printf("********************************************************************************\n");
                  printf("Informe n�mero de identifica��o do aluno: ");
                  scanf("%d",&identificacao);
                  printf("\nInforme nota 1 [00-10]: ");
                  scanf("%f", &nota1);
                  printf("\nInforme nota 2 [00-10]: ");
                  scanf("%f", &nota2);
                  printf("\nInforme nota 3 [00-10]: ");
                  scanf("%f", &nota3);
                  printf("\nInforme a m�dia de Aproveitamento [00-10]: ");
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
				  printf("\nIdentifica��o: %d", identificacao);
				  printf("\nM�dia calculada: %.2f", mediaAproveitamento);
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
				  printf("Esta Op��o n�o est� valida neste sistema\n");
                  printf("********************************************************************************\n");
				  system("pause");
        }
        }while(escolha != 0);    
    return 0;
}

