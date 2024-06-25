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
	
	switch (OP)
	{
	
	case '+':
		printf ("Qual o primeiro número: \n");
		scanf ("%i", &N1);
		printf ("Qual o segundo número: \n");
		scanf("%i", &N2);
		printf ("Soma: %i\n", N1+N2);
		break;
		}
		
	
	
	return 1;
}
