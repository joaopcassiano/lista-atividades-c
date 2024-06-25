#include <stdio.h>
#include <locale.h>

int main (void)

{
	float C,S,NS,A;
	
	setlocale (LC_ALL, "");
	
	printf ("Qual sua profissão?\n");
	printf ("\n");
	printf ("1 - Secretário.\n");
	printf ("2 - Caixa.\n");
	printf ("3 - Gerente.\n");
	printf ("4 - Diretor.\n");
	printf ("\n");
	scanf  ("%f", &C);
	printf ("\n");
	printf ("Qual seu salário atual? \n");
	printf ("\n");
	scanf ("%f", &S);
	printf ("\n");
	
	if (C==1)
		{
		printf ("Seu cargo é: Secretário. \n");
		A= S * 0.35;
		printf ("Seu aumento é equivalente a %.2f \n", A);
		NS = S + A;
		printf ("Seu novo salário é: %.2f \n", NS);
		}
		else
			if (C==2)
			{
				printf ("Seu cargo é: Caixa. \n");
				A = S * 0.2;
				printf ("Seu aumento é equivalente a %.2f \n", A);
				NS = S + A;
				printf ("Seu novo salário é: %.2f \n", NS);
			}
			else
				if (C==3)
				{
					printf ("Seu cargo é: Gerente. \n");
					A = S * 0.1;
					printf ("Seu aumento é equivalente a %.2f \n", A);
					NS = S + A;
					printf ("Seu novo salário é: %,2f \n", A);
					}
					else
						if (C==4)
						 printf ("Seu cargo é: Diretor. \n");
						 printf ("Seu cargo não recebe nenhum aumento e o salário continua %.2f", S);
		
			
	return 1;
}
