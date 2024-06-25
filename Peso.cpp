#include <stdio.h>
#include <locale.h>


int main (void)

{
	int IDADE, NP40;
	float PESO, ALTURA, MEDIAH, SOMAH;
	int I;
	
	setlocale (LC_ALL,"");
	
	NP40=0;
	SOMAH=0;
	
	
	for (I=0; I<5; I+1)
		{
			printf ("Qual sua idade? \n");
			scanf ("%i", &IDADE);
			printf ("Qual sua altura? \n");
			scanf ("%i", &ALTURA);
			printf ("Qual seu peso?  \n");
			scanf ("%i", &PESO);
			
			SOMAH = SOMAH + ALTURA;
			
			if (PESO<40)
			 NP40 = NP40 + 1;
		}
		
	printf ("Média das alturas: %.2f", SOMAH/5);
	printf ("Porcentagem de pessoas com menos de 40KG: %.2f", NP40/5*100);
	
	return 1;
}
