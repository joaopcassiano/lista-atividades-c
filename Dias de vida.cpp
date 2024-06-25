#include <stdio.h>
#include <locale.h>

int main (void)

{
	int DV,A,M,D,R;
	
	setlocale (LC_ALL,"");
	
	printf ("Quantos dias você viveu? ");
	scanf ("%i",&DV);
	
	A= DV/365;
	R= DV%365;
	M= R/30;
	D= R%30;
	
	printf ("Você viveu:\n %i ano(s)\n %i mese(s)\n %i dia(s).",A,M,D);
	
	return 1;
}
