/*
calculo_media.c : calcula a media do aluno e informa se o mesmo foi aprovado ou reprovado.
Escrito por Thiago Motta - FAM Online
Data: 10/03/2022 - Versão 1.0
*/



//inclusão das bibliotecas
#include <stdio.h>
#include <stdlib.h>


int main (){
	int NotaA, NotaB, NotaC, NotaD, Soma, Resultado; // definição das variaveis utilizadas 
	
	printf("Digite a nota do primeiro bimestre: "); // dado da nota 1 inserido pelo usuario no terminal
		scanf("%d", &NotaA);
	
	printf("Digite a nota do segundo bimestre: "); // dado da nota 2 inserido pelo usuario no terminal
		scanf("%d", &NotaB);
		
	printf("Digite a nota do terceiro bimestre: "); // dado da nota 3 inserido pelo usuario no terminal 
		scanf("%d", &NotaC);
		
	printf("Digite a nota do quarto bimestre: "); //  dado da nota 4 inserido pelo usuario no terminal 
		scanf("%d", &NotaD);
		
	Soma = NotaA+NotaB+NotaC+NotaD; // soma dos dados inseridos pelo usuario
	
	Resultado = Soma/4; // resultado da soma dos dados inseridos pelo usuario 
	//	printf("%d", Resultado);
		
	if (Resultado >= 7) { //condicional de decisão (true or false)
		printf("Aprovado com media: %d Parabens!", Resultado ); // se for true, escrever na tela "Aprovado com media: 'x' Parabens!" e encerrar o programa.
	} else {
		printf("Reprovado, estude mais!"); // se for false, escrever na tela "Reprovado, estude mais!" e encerrar o programa.
	}


return 0; // encerramento do programa.
}
