/*
calculo_quadrado.c : calcula o quadrado de um n�mero inteiro
Escrito Thiago Motta - FAM Online 
Data: 10/03/2022 - Vers�o 1.0
*/
#include <stdio.h> //Defini��o de diretivas de biblioteca para printf e scanf
#include <conio.h> //Defini��o de biblioteca para getch
main( ) //Fun��o principal
{
  int num, quad; //Defini��o de vari�veis
  printf ("Digite um valor inteiro: "); //Mensagem que aparece em tela
  scanf ("%d", &num); //Guarda valor digitado
  quad = num * num; //Calcula o quadrado do n�mero
  printf ("O quadrado de %d = %d\n", num, quad); //Apresenta o resultado em tela
  printf("Pressione qualquer tecla para finalizar"); //Mensagem em tela
  getch( ); //Aguarda pressionar uma tecla
}
