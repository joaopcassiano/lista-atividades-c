#include <stdio.h>
#include <locale.h>

int main (void)

{
	int I,NUM;
	
	setlocale (LC_ALL,"");
	
	printf ("Digite o número para fazer a tabuada.");
	scanf ("%i", &NUM);
	
	for (I=0; I<10; I++)
	{
		printf ("%i x %i = %i\n", NUM, I, NUM*I);	
	}
	
	return 1;
}
