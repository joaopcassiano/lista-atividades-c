#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (void)

{
	int NUMERO;
	float RAIZ;
	float NQ;
	
	setlocale (LC_ALL,"");
	printf ("Entre com um número:");
	scanf ("%i",&NUMERO);
	
	RAIZ= sqrt(NUMERO);
	NQ= NUMERO * NUMERO;
	
	printf ("O número ao quadrado: %.2f\n",NQ);
	printf ("A raiz do número: %.2f\n",RAIZ);
	return 1;
}
