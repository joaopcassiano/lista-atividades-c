#include <stdio.h>
#include <locale.h>

int main (void)

{
	float S,NS,A;
	int C;
	
	setlocale (LC_ALL, "");
	
	printf ("Qual sua profiss�o?\n");
	printf ("\n");
	printf ("1 - Secret�rio.\n");
	printf ("2 - Caixa.\n");
	printf ("3 - Gerente.\n");
	printf ("4 - Diretor.\n");
	printf ("\n");
	scanf  ("%i", &C);
	printf ("\n");
	
	switch (C)
	
	
	{
	case 1:
	
	printf ("Qual seu sal�rio atual? \n");
	printf ("\n");
	scanf ("%f", &S);
	printf ("\n");
	printf ("Seu cargo �: Secret�rio. \n");
	A= S * 0.35;
	printf ("Seu aumento � equivalente a %.2f \n", A);
	NS = S + A;
	printf ("Seu novo sal�rio �: %.2f \n", NS);
	break;
		
	case 2:
	
	printf ("Qual seu sal�rio atual? \n");
	printf ("\n");
	scanf ("%f", &S);
	printf ("\n");
	printf ("Seu cargo �: Caixa. \n");
	A = S * 0.2;
	printf ("Seu aumento � equivalente a %.2f \n", A);
	NS = S + A;
	printf ("Seu novo sal�rio �: %.2f \n", NS);
	break;
		
	case 3:
	
	printf ("Qual seu sal�rio atual? \n");
	printf ("\n");
	scanf ("%f", &S);
	printf ("\n");
	printf ("Seu cargo �: Gerente. \n");
	A = S * 0.1;
	printf ("Seu aumento � equivalente a %.2f \n", A);
	NS = S + A;
	printf ("Seu novo sal�rio �: %,2f \n", A);
	break;
		
	case 4:
		
	printf ("Qual seu sal�rio atual? \n");
	printf ("\n");
	scanf ("%f", &S);
	printf ("\n");
	printf ("Seu cargo �: Diretor. \n");
	printf ("Seu cargo n�o recebe nenhum aumento e o sal�rio continua %.2f", S);
	break;
		
	default:
	printf ("Digite uma das op��es de 1 a 4");	
	break;
	}
	return 1;
}
