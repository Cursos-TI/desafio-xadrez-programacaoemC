#include <stdio.h>
        int main(){   //Declarando As Variaveis//
            int opcao;
            int Torre;
            int IT, IB, IR;
            int Bispo;
            int Rainha;
            int Movimentaçao;
            
            //EXIBINDO//
            printf("Escolha as opcoes Abaixo:\n");
            printf("1. Mover Torre\n");
            printf("2. Mover Bispo: Baixo\n");
            printf("3. Mover Bispo: Cima\n");
            printf("4. Mover Rainha\n");
            printf("5. Sair...\n");
            scanf("%d",&opcao);

            switch (opcao)
            {
            case 1: // Mover Torre 5 casas Para Direita//

               for (int IT = 0; IT < 5; IT++);
               {
                printf("Direita\n"); // Direção Movimento//
               }
                break;
               case 2: // Mover Bispo Pra Cima!!//
               do
               {
                printf("Cima\n");
                IB++;
               } while (IB <= 5);
               break;

               case 3: // // Mover Bispo Pra baixo!!//
               do
               {
                printf("Baixo\n");
                IB--;
               } while (IB <= 5);
               
            default:
                break;

                case 4:// Mover Rainha 8 casas para Esquerda//

                while (IR <= 8);

                {
                  printf("Esquerda\n"); // Direção Movimento//
                }
                break;

                case 5:
                printf("Saindo...\n");
                break;
                
                default:
                printf("Opção Invalida!!\n");

                
            }

            

          
            

            return 0;
        }