#include <stdio.h>
#include <locale.h>

int main (void)

{
	int N1, N2;
	
	setlocale (LC_ALL,"");

	printf ("Insira o primeiro n�mero: ");
	scanf ("%i", &N1);
	printf ("Insira o segundo n�mero: ");
	scanf ("%i", &N2);
	
	if (N1>N2)
		printf ("O n�mero maior � %i", N1);
	
	else
		printf ("O n�mero maior � %i", N2);
	
	return 1;
}
