#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (void)

{
	int NUMERO;
	float RAIZ;
	float NQ;
	
	setlocale (LC_ALL,"");
	printf ("Entre com um n�mero:");
	scanf ("%i",&NUMERO);
	
	RAIZ= sqrt(NUMERO);
	NQ= NUMERO * NUMERO;
	
	printf ("O n�mero ao quadrado: %.2f\n",NQ);
	printf ("A raiz do n�mero: %.2f\n",RAIZ);
	return 1;
}
