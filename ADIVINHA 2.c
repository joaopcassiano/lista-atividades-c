#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main (void)
{
	int X, C, NT=0;
	
	setlocale (LC_ALL,"");
	
	srand(time(NULL));
	X = rand()%100+1;
	
	do 
	{
	printf ("Qual o número: \n");
	scanf ("%i", &C);
	
		if (C>X)		
			printf ("O número é menor.\n");
		else
			if (C<X)
			printf ("O número é maior\n");
	NT = NT + 1;
		
	}while (X != C);
	
	printf ("Parábens você acertou!\n");
	printf ("Números de tentativas: %i ", NT);
	
	return 1;
}