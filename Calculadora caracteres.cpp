#include <stdio.h>
#include <locale.h>

int main (void)

{
	int N1,N2;
	char OP;
	
	setlocale (LC_ALL,"");
	
	printf ("CALCULADORA\n");
	printf ("=============\n");
	printf ("Soma (+)\n");
	printf ("Subtração - (-)\n");
	printf ("Multiplicação - (*)\n");
	printf ("Divisão - (/)\n");
	printf ("=============\n");
	printf ("Opção: ");
	scanf ("%s*c", &OP);
	
	printf ("Qual o primeiro número: \n");
	scanf ("%i", &N1);
	printf ("\n");
	printf ("Qual o segundo número: \n");
	scanf("%i", &N2);
	
	switch (OP)
	{
	
	case '+':
		printf ("Soma: %i\n", N1+N2);
		break;
	
	case '-':
		printf ("Subtração: %i\n", N1-N2);
		break;
	
	case '*':
		printf ("Soma: %i\n", N1*N2);
		break;
	
	case '/':
		printf ("Soma: %.2f \n",(float) N1/N2);
		break;
	
	default:
		printf ("Opção inválida\n");
	 
}
	
	return 1;
}
