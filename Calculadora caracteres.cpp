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
	printf ("Subtra��o - (-)\n");
	printf ("Multiplica��o - (*)\n");
	printf ("Divis�o - (/)\n");
	printf ("=============\n");
	printf ("Op��o: ");
	scanf ("%s*c", &OP);
	
	printf ("Qual o primeiro n�mero: \n");
	scanf ("%i", &N1);
	printf ("\n");
	printf ("Qual o segundo n�mero: \n");
	scanf("%i", &N2);
	
	switch (OP)
	{
	
	case '+':
		printf ("Soma: %i\n", N1+N2);
		break;
	
	case '-':
		printf ("Subtra��o: %i\n", N1-N2);
		break;
	
	case '*':
		printf ("Soma: %i\n", N1*N2);
		break;
	
	case '/':
		printf ("Soma: %.2f \n",(float) N1/N2);
		break;
	
	default:
		printf ("Op��o inv�lida\n");
	 
}
	
	return 1;
}
