#include <stdio.h>
#include <locale.h>

int main (void)

{
	float C,S,NS,A;
	
	setlocale (LC_ALL, "");
	
	printf ("Qual sua profiss�o?\n");
	printf ("\n");
	printf ("1 - Secret�rio.\n");
	printf ("2 - Caixa.\n");
	printf ("3 - Gerente.\n");
	printf ("4 - Diretor.\n");
	printf ("\n");
	scanf  ("%f", &C);
	printf ("\n");
	printf ("Qual seu sal�rio atual? \n");
	printf ("\n");
	scanf ("%f", &S);
	printf ("\n");
	
	if (C==1)
		{
		printf ("Seu cargo �: Secret�rio. \n");
		A= S * 0.35;
		printf ("Seu aumento � equivalente a %.2f \n", A);
		NS = S + A;
		printf ("Seu novo sal�rio �: %.2f \n", NS);
		}
		else
			if (C==2)
			{
				printf ("Seu cargo �: Caixa. \n");
				A = S * 0.2;
				printf ("Seu aumento � equivalente a %.2f \n", A);
				NS = S + A;
				printf ("Seu novo sal�rio �: %.2f \n", NS);
			}
			else
				if (C==3)
				{
					printf ("Seu cargo �: Gerente. \n");
					A = S * 0.1;
					printf ("Seu aumento � equivalente a %.2f \n", A);
					NS = S + A;
					printf ("Seu novo sal�rio �: %,2f \n", A);
					}
					else
						if (C==4)
						 printf ("Seu cargo �: Diretor. \n");
						 printf ("Seu cargo n�o recebe nenhum aumento e o sal�rio continua %.2f", S);
		
			
	return 1;
}
