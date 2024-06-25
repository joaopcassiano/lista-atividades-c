#include <stdio.h>
#include <locale.h>

int main (void)

{
	float D,A,ND;
	setlocale (LC_ALL,"");
	printf ("Insira a altura do degrau: ");
	scanf ("%f", &D);
	printf ("Insira a altura da escada desejada: ");
	scanf ("%f", &A);
	
	ND = A / D;
	
	printf ("O numero de degraus e: %.2f",ND);
	
	return 1;
}
