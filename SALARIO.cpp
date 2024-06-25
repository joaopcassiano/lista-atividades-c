#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main (void)
{

float SA, NS;
int OP,MT;

setlocale (LC_ALL,"");

	do
	{	
		system ("cls");
		printf ("===============\n");
		printf ("Menu de opções: \n");
		printf ("1- Novo salário: \n");
		printf ("2- Férias: \n");
		printf ("3- Décimo terceiro: \n");
		printf ("4- Sair");
		printf ("\n");
		printf ("===============\n");
		printf ("Sua opção: \n");
		scanf ("%i", &OP);
		
		
 		switch (OP)
		{
			case 1:
			printf ("Qual seu salário atual?\n");
			scanf ("%f", &SA);
				if (SA<=2100)
			 	NS = SA * 1.15;
				else
					if (SA<=6000)
					NS  = SA * 1.10;
					else 
					NS = SA * 1.05;
					
			printf ("Novo salário: %f\n", NS);
			system ("Pause");
			break;
			
			case 2:
			printf ("Qual seu salário atual? \n");
			scanf ("%f", &SA);
			NS = SA + SA / 3;
			printf ("O valor de suas férias é: %.2f\n", SA/3);
			
			printf ("Novo salário: %f\n", NS);
			system ("Pause");
			break;
			
			case 3:
			printf ("Qual seu salário atual?");
			scanf ("%f", &SA);
			printf ("Quais foram o número de meses trabalhados?");
			scanf ("%i", &MT);
			NS = SA / 12 * MT;
			
			printf ("Novo salário: %f\n", NS);
			system ("Pause");
			break;
		}
			
					
	}while (OP<=4);
 	
	 
return 1;
}
