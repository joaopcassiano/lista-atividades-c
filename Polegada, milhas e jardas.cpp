#include <stdio.h>
#include <locale.h>

int main (void)

{
	float PES,P,J,M;
	setlocale (LC_ALL,"");
	printf ("Entre com a medida em pés: ");
	scanf ("%f",&PES);
	
	P= PES * 12;
	J= PES / 3;
	M= J/1760;
	
	printf ("Polegada: %10.2f\n",P);
	printf ("Jarda:... %10.2f\n",J);
	printf ("Milha:... %10.2f\n",M);
	
	return 1;
}
