#include <stdio.h>
#include <locale.h>

int main (void)

{
	float S,NS,A;
	int C;
	
	setlocale (LC_ALL, "");
	
	printf ("Qual sua profissão?\n");
	printf ("\n");
	printf ("1 - Secretário.\n");
	printf ("2 - Caixa.\n");
	printf ("3 - Gerente.\n");
	printf ("4 - Diretor.\n");
	printf ("\n");
	scanf  ("%i", &C);
	printf ("\n");
	
	switch (C)
	
	
	{
	case 1:
	
	printf ("Qual seu salário atual? \n");
	printf ("\n");
	scanf ("%f", &S);
	printf ("\n");
	printf ("Seu cargo é: Secretário. \n");
	A= S * 0.35;
	printf ("Seu aumento é equivalente a %.2f \n", A);
	NS = S + A;
	printf ("Seu novo salário é: %.2f \n", NS);
	break;
		
	case 2:
	
	printf ("Qual seu salário atual? \n");
	printf ("\n");
	scanf ("%f", &S);
	printf ("\n");
	printf ("Seu cargo é: Caixa. \n");
	A = S * 0.2;
	printf ("Seu aumento é equivalente a %.2f \n", A);
	NS = S + A;
	printf ("Seu novo salário é: %.2f \n", NS);
	break;
		
	case 3:
	
	printf ("Qual seu salário atual? \n");
	printf ("\n");
	scanf ("%f", &S);
	printf ("\n");
	printf ("Seu cargo é: Gerente. \n");
	A = S * 0.1;
	printf ("Seu aumento é equivalente a %.2f \n", A);
	NS = S + A;
	printf ("Seu novo salário é: %,2f \n", A);
	break;
		
	case 4:
		
	printf ("Qual seu salário atual? \n");
	printf ("\n");
	scanf ("%f", &S);
	printf ("\n");
	printf ("Seu cargo é: Diretor. \n");
	printf ("Seu cargo não recebe nenhum aumento e o salário continua %.2f", S);
	break;
		
	default:
	printf ("Digite uma das opções de 1 a 4");	
	break;
	}
	return 1;
}
