#include <stdio.h>
#include <locale.h>

int main (void)

{
	int N1, N2;
	
	setlocale (LC_ALL,"");

	printf ("Insira o primeiro número: ");
	scanf ("%i", &N1);
	printf ("Insira o segundo número: ");
	scanf ("%i", &N2);
	
	if (N1>N2)
		printf ("O número maior é %i", N1);
	
	else
		printf ("O número maior é %i", N2);
	
	return 1;
}
