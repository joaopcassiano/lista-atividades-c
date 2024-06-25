#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (void)

{
	int CANAL, NP=0, C5=0, C7=0, C4=0;
	
	setlocale (LC_ALL,"");
	
	do 
	{
		system ("cls");
		printf ("Qual o canal está assistindo? ");
		scanf("%i", &CANAL);
		printf ("Quantas pessoas estão assistindo? ");
		scanf ("%i", &NP);
		
		
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
		
		}
		printf ("Casa registrada com sucesso.\n");
		system ("Pause");
		
	}
	while ();
	
	
	
	return 1;
}
