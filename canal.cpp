#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (void)

{
	int CANAL, NP=0, C5=0, C7=0, C4=0, TP;
	
	setlocale (LC_ALL,"");
	
	do 
	{
		
		printf ("Qual o canal está assistindo? 4, 5 ou 7? ");
		scanf("%i", &CANAL);
		
			if (CANAL == 4 || CANAL == 5 || CANAL == 7)
			{
			printf ("Quantas pessoas estão assistindo? ");
			scanf ("%i", &NP);
			}
		
		switch (CANAL)
		{
		
			case 4:
				C4 = C4 + NP;
				break;
		
				
		
			case 5:
				C5 = C5 + NP;
				break;
			
			case 7:
				C7 = C7 + NP;
				break;
				
			case -1:
				printf ("Pesquisa finalizada. \n");
				break;
					
			default:
				printf ("Canal inválido.\n");
		}
	}while (CANAL != -1);
	
	TP = C4 + C5 + C7;
	
	if (TP>0)
	{
	printf ("Porcentagens dos canais: \n");
	printf ("Canal 4 = %.2f%%\n",(float) C4/TP*100);
	printf ("Canal 5 = %.2f%%\n",(float) C5/TP*100);
	printf ("Canal 7 = %.2f%%\n",(float) C7/TP*100);
	}
	
	return 1;
}
