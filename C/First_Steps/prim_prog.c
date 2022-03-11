/*
prim_prog.c : informa quantos numero da base de dados inserida pelo usuario são impares ou pares.
Escrito Thiago Motta - FAM Online (projeto da faculdade)
Data: 08/03/2022 - Vers�o 1.0
*/


//inclus�o de bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cont, n, par, impar, num; //declara��o de variaveis do tipo numeros inteiros
	printf ("Digite o tamanho da sequencia: "); //mostra mensagem na tela pedindo ao usuario para digitar algo
	scanf("%d", &n); //le informa��o do teclado digitado pelo usuario
	//variaveis ser�o iniciadas em 0 
	par = 0;
	impar = 0;
	cont = 0;
	/*a seguir sera realizado um looping 
	nele vamos verificar o tamanho da sequencia definida anteriormente pelo user 
	Em seguida vai pedir para o user digitar 1 number por vez, a quantidade de vezes da sequencia por ele definida
	O programa vai verificar se cada numero � par ou impar
	O pragrama vai mostrar quantos numeros pares e quantos numero impares foram
	digitados  e mostrar essa informa��o na tela*/
	while (cont < n)
	{
		
		printf("Digite o %do. numero: ", cont+1);
		scanf("%d", &num);
		if (num%2 == 0)
		    par = par +1;
		else
		    impar = impar +1;
		cont = cont +1;
	}
	printf("A sequencia e formada por %d numeros pares e %d impares.\n\n", par,impar);
	system ("PAUSE");
	return 0;
}
