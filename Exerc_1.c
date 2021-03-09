#include <stdio.h>
#include <stdlib.h>
#define DIS 3
#define NOT 5

int main(){
     int menu, i, j, volta = 0, aux, ganhou_3, ganhou_4; //Declaração de variáveis
     float vetor1[DIS], vetor2[DIS], vetor3[NOT], vetor4[NOT]; //Declaração de vetores
     /*
          vetor1[DIS] representa o Atleta 1 de Arremesso de peso
          vetor2[DIS] representa o Atleta 2 de Arremesso de peso
          vetor3[NOT] representa o Atleta 1 de Ginástica Artística
          vetor4[NOT] representa o Atleta 2 de Ginástica Artística
          ganhou_3 representa a soma dos resultados do Atleta 1 de Ginástica Artística
          ganhou_4 representa a soma dos resultados do Atleta 2 de Ginástica Artística
     */

     do{//Repetição do menu
          printf("===========================Menu de Opcoes=============================\n");
          printf("1 - Inserir dados do Atleta 1 em Arremesso de Peso.\n");
          printf("2 - Inserir dados do Atleta 2 em Arremesso de Peso.\n");
          printf("3 - Ver Resultado de Arremesso de peso\n");
          printf("4 - Inserir dados do Atleta 1 em Ginastica Artistica.\n");
          printf("5 - Inserir dados do Atleta 2 em Ginastica Artistica.\n");
          printf("6 - Eliminar nota mais baixa dos Atletas de Ginastica Artistica.\n");
          printf("7 - Ver Resultado de Ginastica Artistica.\n");
          printf("8 - Sair \n");
          printf("======================================================================\n");
          printf("Escolha uma opcao: ");
          scanf("%i", &menu);

          switch (menu){

               case 1://Le do teclado atravez do scanf, os dados do atleta 1 de Arremesso de peso
                    for(i=0; i < DIS; i++){
                    printf("Digite os valores do Atleta 1 de Arremesso de Peso: ");
                    scanf("%f", &vetor1[i]);
                    }
                    printf("Atleta 1: \n");
                    printf("[%.2f - ", vetor1[0]);
                    printf(" %.2f - ", vetor1[1]);
                    printf(" %.2f]\n", vetor1[2]);
                    printf("\n\n");
                    break;
               
               case 2://Le do teclado atravez do scanf, os dados do atleta 2 de Arremesso de peso
                    for(i=0; i < DIS; i++){
                    printf("Digite os valores do Atleta 2 de Arremesso de Peso: ");
                    scanf("%f", &vetor2[i]);
                    }
                    printf("Atleta 2: \n");
                    printf("[%.2f - ", vetor2[0]);
                    printf(" %.2f - ", vetor2[1]);
                    printf(" %.2f]\n", vetor2[2]);
                    printf("\n\n");
                    break;
               
               case 3://Ordena os vetores em ordem decrescente e faz a comparação do maior número para verificar o vencedor 
                    for(i=0; i<DIS; i++){//Ordenando o Vetor 1
                         for(i=j;j<DIS;j++){
                              if(vetor1[i]>vetor1[j]){
                                   aux = vetor1[i];
                                   vetor1[i] = vetor1[j];
                                   vetor1[j] = aux;
                              }
                         }
                    }
                    printf("Atleta 1: \n");
                    printf("[%.2f - ", vetor1[0]);
                    printf(" %.2f - ", vetor1[1]);
                    printf(" %.2f]\n", vetor1[2]);
                    printf("\n\n");

                    for(i=0; i<DIS; i++){//Ordenando o Vetor 2
                         for(i=j;j<DIS;j++){
                              if(vetor2[i]>vetor2[j]){
                                   aux = vetor2[i];
                                   vetor2[i] = vetor2[j];
                                   vetor2[j] = aux;
                              }
                         }
                    }
                    printf("Atleta 2: \n");
                    printf("[%.2f - ", vetor2[0]);
                    printf(" %.2f - ", vetor2[1]);
                    printf(" %.2f]\n", vetor2[2]);
                    printf("\n\n");

                    if(vetor1[0] == vetor2[0]){//Comparação dos maiores indices dos vetores e a verificação caso haja empate.
                         if(vetor1[1] > vetor2[1]){
                              printf("Atleta 1 venceu!!!\n");
                         }else{
                              printf("Atleta 2 venceu!!!\n");
                         }
                    }else{
                         if(vetor1[0] > vetor2[0]){
                              printf("Atleta 1 venceu!!!\n");
                         }else{
                              printf("Atleta 2 venceu!!!\n");
                         }
                    }
                    break;

               case 4://Le do teclado atravez do scanf, os dados do atleta 1 de Ginástica Artística
                    for(i=0; i < NOT; i++){
                    printf("Digite os valores do Atleta 1 de Ginastica Artistica: ");
                    scanf("%f", &vetor3[i]);
                    }
                    printf("Atleta 1: \n");
                    printf("[%.2f - ", vetor3[0]);
                    printf(" %.2f - ", vetor3[1]);
                    printf(" %.2f - ", vetor3[2]);
                    printf(" %.2f - ", vetor3[3]);
                    printf(" %.2f]\n", vetor3[4]);
                    printf("\n\n");
                    break;

               case 5://Le do teclado atravez do scanf, os dados do atleta 2 de Ginástica Artística
                    for(i=0; i < NOT; i++){
                    printf("Digite os valores do Atleta 2 de Ginastica Artistica: ");
                    scanf("%f", &vetor4[i]);
                    }
                    printf("Atleta 2: \n");
                    printf("[%.2f - ", vetor4[0]);
                    printf(" %.2f - ", vetor4[1]);
                    printf(" %.2f - ", vetor4[2]);
                    printf(" %.2f - ", vetor4[3]);
                    printf(" %.2f]\n", vetor4[4]);
                    printf("\n\n");
                    break;
                        
               case 6://Ordena os vetores em ordem crescente e elinmina a menor nota para indicar o vencedor
                    for(i=0;i<NOT;i++){ //Para o Atleta 1
                            for(j=i;j<NOT;j++){
                                if(vetor3[i]>vetor3[j]){
                                    aux = vetor3[i];
                                    vetor3[i] = vetor3[j];
                                    vetor3[j] = aux;
                                    }
                                }
                            }
                            printf("Atleta 1: \n");
                            printf("[%.2f - ", vetor3[0]);
                            for(i=1;i<4;i++){
                                 printf("%.2f - ", vetor3[i]);
			            }
                           printf(" %.2f]\n", vetor3[4]);

                    for(i=0;i<NOT;i++){ //Para o Atleta 2
                            for(j=i;j<NOT;j++){
                                if(vetor4[i]>vetor4[j]){
                                    aux = vetor4[i];
                                    vetor4[i] = vetor4[j];
                                    vetor4[j] = aux;
                                    }
                                }
                            }
                            printf("Atleta 2: \n");
                            printf("[%.2f - ", vetor4[0]);
                            for(i=1;i<4;i++){
                                 printf("%.2f - ", vetor4[i]);
			            }
                           printf(" %.2f]\n", vetor4[4]);  
                         break;

               case 7://Realiza os calculos para indicar o vencedor 
                    ganhou_3 = vetor3[1] + vetor3[2] + vetor3[3] + vetor3[4];
                    ganhou_4 = vetor4[1] + vetor4[2] + vetor4[3] + vetor4[4];
                    printf("Nota do Atleta 1: %.2f\n\n", ganhou_3);
                    printf("Nota do Atleta 2: %.2f\n\n", ganhou_4);
                    if(ganhou_3 > ganhou_4){
                         printf("Atleta 1 Ganhou\n\n");
                         }
                         else if(ganhou_4 > ganhou_3){
                              printf("Atleta 2 Ganhou\n\n");
                         }
                         else{
                              printf("Empate!!!\n\n");
                         }
                         break;
               case 8://Finaliza o menu
                    exit(0);
                    
               default://Caso o numero digitado não esteja no menu
               printf("Numero invalido, digite um numero valido no menu\n\n");             
          }
     }while(volta==0);//Fim do do-while.
     return 0;
}